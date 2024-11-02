/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:48:56 by msawada           #+#    #+#             */
/*   Updated: 2024/05/07 21:23:59 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	base_conversion(long long n, int sign)
{
	if (n >= 16)
	{
		base_conversion(n / 16, sign);
	}
	base_number(n % 16, sign);
}

int	x_digit(long long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 16;
		count++;
	}
	return (count);
}

int	print_x(unsigned int num, int sign)
{
	base_conversion(num, sign);
	return (x_digit(num));
}
