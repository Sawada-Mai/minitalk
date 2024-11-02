/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:54:47 by msawada           #+#    #+#             */
/*   Updated: 2024/03/02 14:47:25 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <stddef.h>
// #include <string.h>
// int main(void)
// {
// 	char src[] = "42 Tokyo";
// 	char dest[10];
// 	ft_memcpy(dest, src, 0);
// 	// memcpy(dest, src, 0);
// 	// dest[5] = '\0';
// 	printf("%s\n", dest);
// }