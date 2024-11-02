/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:48:18 by msawada           #+#    #+#             */
/*   Updated: 2024/05/07 21:24:16 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_digit_u(unsigned int n)
{
	int	i;

	i = 0;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	i++;
	return (i);
}

void	ft_putnbr_u(unsigned int n)
{
	if (n >= 10)
	{
		ft_putnbr_u(n / 10);
	}
	print_num(n % 10);
}

int	print_u(unsigned int num)
{
	ft_putnbr_u(num);
	return (ft_digit_u(num));
}
