/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:51:46 by msawada           #+#    #+#             */
/*   Updated: 2024/03/02 15:14:23 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*last_p;

	last_p = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			last_p = (unsigned char *)s;
		s++;
	}
	if ((*s == (unsigned char)c))
		last_p = (unsigned char *)s;
	return ((char *)last_p);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char str1[] = "42 Tokyo";
// 	char c = 'o';

// 	printf("%s\n", ft_strrchr(str1, c));
// 	printf("%s\n", strrchr(str1, c));
// }