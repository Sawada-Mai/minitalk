/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:46:30 by msawada           #+#    #+#             */
/*   Updated: 2024/05/07 21:21:30 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	change(unsigned long long addr)
{
	if (addr >= 16)
	{
		change(addr / 16);
	}
	base_number(addr % 16, 1);
	return (1);
}

int	count_digit(unsigned long long addr)
{
	unsigned int	count;

	count = 0;
	while (addr >= 16)
	{
		count++;
		addr = addr / 16;
	}
	return (count + 1);
}

int	print_p(void *ptr)
{
	unsigned long long	addr;

	addr = (unsigned long long)ptr;
	write(1, "0x", 2);
	if (addr == 0)
	{
		write(1, "0", 1);
		return (3);
	}
	change(addr);
	return (count_digit(addr) + 2);
}
