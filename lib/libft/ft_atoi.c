/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:30:50 by msawada           #+#    #+#             */
/*   Updated: 2024/11/21 18:07:26 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	change_num(const char *nptr)
{
	long	num;

	num = 0;
	while (*nptr)
	{
		if (num > 32768)
			return (0);
		if (!(*nptr >= '0' && *nptr <= '9'))
			return (0);
		num *= 10;
		num += *nptr - '0';
		nptr++;
	}
	if (num > 32768)
		return (0);
	return (num);
}

int	ft_atoi(const char *nptr)
{
	while (*nptr == '\t' || *nptr == '\n' || *nptr == '\v' || *nptr == '\f'
		|| *nptr == '\r' || *nptr == ' ')
	{
		nptr++;
	}
	if (*nptr == '-' || *nptr == '+')
		return (0);
	if (*nptr >= '0' && *nptr <= '9')
		return (change_num(nptr));
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>
// int main(void)
// {
// 	char str[] = "18446744073709551616";
// 	int num1 = ft_atoi(str);
// 	// int num2 = atoi(str);
// 	printf("%d\n", num1);
// 	// printf("%d\n", num2);
// }
