/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:49:03 by msawada           #+#    #+#             */
/*   Updated: 2024/03/02 18:21:09 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_store(char *str, long n, unsigned int d)
{
	unsigned int	i;

	i = d - 1;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n >= 10)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	str[i] = n + '0';
	return (str);
}

int	ft_digit(long n)
{
	unsigned int	i;

	i = 0;
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

char	*ft_itoa(int n)
{
	unsigned int	d;
	char			*str;

	d = ft_digit((long)n);
	str = (char *)malloc(sizeof(char) * (d + 1));
	if (str == NULL)
		return (NULL);
	ft_store(str, (long)n, d);
	str[d] = '\0';
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str;

// 	str = ft_itoa(42);
// 	printf("%s\n", str);
// 	str = ft_itoa(-21);
// 	printf("%s\n", str);
// }