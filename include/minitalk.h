/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:59:12 by msawada           #+#    #+#             */
/*   Updated: 2024/11/02 18:16:38 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "ft_printf.h"
# include "libft.h"
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// Client
void	ft_send_bit(int pid, int bit);
void	ft_send_char(int pid, unsigned char c);
void	ft_send_string(int pid, const char *str);
void	ft_resp_handler(int signum);

// Server
void	ft_handle_signal(int signum, siginfo_t *info, void *context);

#endif