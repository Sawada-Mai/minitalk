/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:55:26 by msawada           #+#    #+#             */
/*   Updated: 2024/03/02 14:48:08 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		if (*p == (unsigned char)c)
		{
			return ((void *)p);
		}
		n--;
		p++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main(void) {
// 	char str[] = "42 Tokyo!";
// 	int target = '\0';

// 	char *result = ft_memchr(str, target, 5);

// 	if (result != NULL)
// 	{
// 		printf("位置: %s\n", result);
// 	}
// 	else
// 	{
// 		printf("見つからへんかった\n");
// 	}
// 	return 0;
// }