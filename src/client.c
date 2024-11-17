/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 20:51:56 by msawada           #+#    #+#             */
/*   Updated: 2024/11/17 20:51:59 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int		server_status = 0;

void	handle_signal_complete(int signum)
{
	(void)signum;
	server_status = STATUS_COMPLETE;
}

void	send_char(pid_t pid, char c)
{
	int	i;
	int	status;

	i = 7;
	status = 0;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			status = kill(pid, SIGUSR1);
		else
			status = kill(pid, SIGUSR2);
		if (status == -1)
		{
			ft_putstr_fd("Error\n", 2);
			exit(EXIT_FAILURE);
		}
		while (server_status == STATUS_WAITING)
			usleep(100);
		server_status = STATUS_WAITING;
		i--;
	}
	return ;
}

void	send_str(pid_t pid, char *str)
{
	while (*str)
	{
		send_char(pid, *str);
		str++;
	}
	send_char(pid, '\0');
	return ;
}

int	main(int argc, char **argv)
{
	pid_t	pid;

	if (argc != 3)
	{
		ft_putstr_fd("./client [PID] [string]\n", 2);
		exit(EXIT_FAILURE);
	}
	pid = ft_atoi(argv[1]);
	if (pid <= 0)
	{
		ft_putstr_fd("Invalid PID\n", 2);
		exit(EXIT_FAILURE);
	}
	signal(SIGUSR2, handle_signal_complete);
	send_str(pid, argv[2]);
	return (0);
}
