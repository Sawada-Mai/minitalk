/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:55:14 by msawada           #+#    #+#             */
/*   Updated: 2024/03/02 14:55:42 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	str_move(unsigned char *d, unsigned char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d > s && d < s + n)
	{
		i = 1;
		while (i <= n)
		{
			d[n - i] = s[n - i];
			i++;
		}
	}
	else
		str_move(d, s, n);
	return (d);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char source[] = "Hello, World!";
// 	char destination[20];

// 	ft_memmove(destination, source, 5);
// 	// memmove(destination, source, 5);

// 	printf("コピー元: %s\n", source);
// 	printf("結果: %s\n", destination);

// 	return 0;
// }