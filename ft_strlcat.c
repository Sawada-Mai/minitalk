/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:04:55 by msawada           #+#    #+#             */
/*   Updated: 2024/04/17 14:17:15 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;

	s = ft_strlen(src);
	if (dest == NULL && size == 0)
		return (s);
	d = ft_strlen(dest);
	if (size <= d)
		return (size + s);
	i = 0;
	while (src[i] && (d + i) < (size - 1))
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (d + s);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	// char src1[100] = "aaaaaa";
// 	// char src2[100] = "bcd";
// 	// char src3[100] = "aaaaaa";
// 	char src4[100] = "";
// 	int i;

// 	// i = ft_strlcat(NULL, src2, 3);
// 	// printf("%d\n", i);
// 	// printf("%s\n", src1);
// 	// i = ft_strlcat(src4, "", 0);
// 	// printf("%d\n", i);
// 	// printf("%s\n", src4);
// 	i = ft_strlcat(src4, "aaaaa", 0);
// 	// i = strlcat(src4, "aaaaa", 0);
// 	printf("%d\n", i);
// 	printf("%s\n", src4);
// }
