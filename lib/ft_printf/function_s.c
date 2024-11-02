/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:44:44 by msawada           #+#    #+#             */
/*   Updated: 2024/05/07 21:21:36 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_s(char *str)
{
	int	n;

	n = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[n])
	{
		write(1, &str[n], 1);
		n++;
	}
	return (n);
}
