/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:47:04 by msawada           #+#    #+#             */
/*   Updated: 2024/05/07 21:21:25 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_digit(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		return (11);
	}
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	i++;
	return (i);
}

void	print_num(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}

void	ft_putnbr_d(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_d(n / 10);
	}
	print_num(n % 10);
}

int	print_d(int num)
{
	ft_putnbr_d(num);
	return (ft_digit(num));
}
