/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:50:16 by msawada           #+#    #+#             */
/*   Updated: 2024/05/07 21:22:17 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *fmt, ...);
int		print_c(int c);
int		print_s(char *str);
int		print_p(void *ptr);
int		print_d(int num);
int		print_u(unsigned int num);
int		print_x(unsigned int num, int sign);
void	print_num(int n);
void	base_number(unsigned int n, int sign);

#endif