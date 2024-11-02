/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:54:02 by msawada           #+#    #+#             */
/*   Updated: 2024/03/02 14:42:53 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char str1[] = "42Tokyo";
// 	int str2[] = {12345, 67890};
// 	ft_bzero(str1, 2);
// 	printf("%s\n", str1);
// 	ft_bzero(str2, 2);
// 	printf("%d %d\n", str2[0], str2[1]);
// 	return 0;
// }