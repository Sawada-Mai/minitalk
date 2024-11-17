/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:17:34 by msawada           #+#    #+#             */
/*   Updated: 2024/11/17 20:42:39 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_handle_signal(int signum, siginfo_t *info, void *context)
{
	static unsigned char	c;
	static int				count = 0;
	static pid_t			client_pid = 0;

	(void)context;
	if (client_pid != info->si_pid || client_pid == 0)
	{
		client_pid = info->si_pid;
		count = 0;
		c = 0;
	}
	if (signum == SIGUSR1)
		c = c | 1;
	count++;
	if (count == 8)
	{
		if (c == '\n')
			write(1, "koko", 5);
		write(1, &c, 1);
		c = 0;
		count = 0;
	}
	else
		c = c << 1;
	kill(client_pid, SIGUSR2);
}

int	main(void)
{
	struct sigaction	sa;

	printf("Server PID: %d\n", getpid());
	sa.sa_sigaction = &ft_handle_signal;
	sa.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
