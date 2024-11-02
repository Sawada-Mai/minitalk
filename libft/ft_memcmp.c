/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:55:55 by msawada           #+#    #+#             */
/*   Updated: 2024/03/07 16:22:50 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	long	buf1 = 100;
// 	long	buf2 = 100;
// 	short	num1[] = { 10, 20, 30 };
// 	short	num2[] = { 10, 20, 30 };
// 	char	moji1[] = "Hello";
// 	char	moji2[] = "Hello";

// 	printf("%d\n", memcmp(&buf1, &buf2,	sizeof(buf1)));
// 	printf("%d\n", memcmp(moji1, moji2, sizeof(moji1)));
// 	printf("%d\n", memcmp(num1, num2, sizeof(num1)));

// 	return 0;
// }