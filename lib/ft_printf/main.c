/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:52:17 by msawada           #+#    #+#             */
/*   Updated: 2024/05/07 21:29:12 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	select_type(char c, va_list args)
{
	if (c == 'c')
		return (print_c(va_arg(args, int)));
	else if (c == 's')
		return (print_s(va_arg(args, char *)));
	else if (c == 'p')
		return (print_p(va_arg(args, void *)));
	else if (c == 'd')
		return (print_d(va_arg(args, int)));
	else if (c == 'i')
		return (print_d(va_arg(args, int)));
	else if (c == 'u')
		return (print_u(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (print_x(va_arg(args, unsigned int), 1));
	else if (c == 'X')
		return (print_x(va_arg(args, unsigned int), 2));
	else
	{
		write(1, &c, 1);
		return (1);
	}
}

int	ft_printf(const char *fmt, ...)
{
	va_list			args;
	unsigned int	count;

	va_start(args, fmt);
	if (!fmt)
		return (-1);
	count = 0;
	while (*fmt)
	{
		if (*fmt == '%')
		{
			fmt++;
			if (*fmt == '\0')
				return (count);
			count += select_type(*fmt, args);
		}
		else
		{
			write(1, fmt, 1);
			count += 1;
		}
		fmt++;
	}
	va_end(args);
	return (count);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	n;
// 	n = 0;
// 	// char *null_str = NULL;
// 	// static char	a01;
// 	// static unsigned char a02;
// 	// static short a03;
// 	// static unsigned short a04;
// 	// static int a05;
// 	// static unsigned int a06;
// 	// static long a07;－
// 	// static unsigned long a08;
// 	// static long long a09;
// 	// static unsigned long long a10;
// 	// static char *a11;
// 	// static void *a12;

// 	// printf("%d\n", n);
// 	n = ft_printf("\001\002\007\v\010\f\r\n");
// 	printf("\n%d\n", n);
// 	// printf(NULL);
// 	// printf("\n");
// 	// n = ft_printf("ft_printf = %u\n", LONG_MAX);
// 	// printf("%d\n", n);
// 	// n = printf("printf = %p\n", &s);
// 	// printf("%d", n);
// }
