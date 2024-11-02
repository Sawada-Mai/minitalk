/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:04:45 by msawada           #+#    #+#             */
/*   Updated: 2024/04/20 17:13:53 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	// char dest[] = NULL;
// 	// char str1[] = "42_Tokyo";
// 	// char c[256] = "42tokyo";
// 	int i;

// 	i = ft_strlcpy(NULL , "42", 2);
// 	printf("%i\n\n", i);
// 	// i = strlcpy(dest, str1, 0);
// 	// printf("%s\n", dest);
// 	// printf("%i\n", i);
// 	return 0;
// }