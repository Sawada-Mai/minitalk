/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:45:56 by msawada           #+#    #+#             */
/*   Updated: 2024/05/07 21:22:29 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len > 0)
	{
		while (src[i] && (i + 1) < len)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

void	base_number(unsigned int n, int sign)
{
	char	base_number1[17];
	char	base_number2[17];

	ft_strlcpy(base_number1, "0123456789abcdef", 17);
	ft_strlcpy(base_number2, "0123456789ABCDEF", 17);
	if (sign == 1)
		write(1, &base_number1[n], 1);
	else
		write(1, &base_number2[n], 1);
}
