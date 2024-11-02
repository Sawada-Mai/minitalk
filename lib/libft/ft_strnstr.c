/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 18:03:48 by msawada           #+#    #+#             */
/*   Updated: 2024/03/02 18:07:37 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checkstr(const char *str1, const char *str2, size_t i, size_t len)
{
	size_t	j;

	j = 0;
	while (str1[i] && str2[j] && (i < len))
	{
		if (str1[i] != str2[j])
			return (0);
		i++;
		j++;
	}
	return (str2[j] == '\0');
}

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	i;

	i = 0;
	if ((len == 0 && *str2 == '\0'))
		return ((char *)str1);
	if ((len == 0) || (*str1 == '\0' && *str2 != '\0'))
		return (NULL);
	if ((*str1 != '\0' && *str2 == '\0') || (*str1 == '\0' && *str2 == '\0'))
		return ((char *)str1);
	while (str1[i] && i < len)
	{
		if (str1[i] == str2[0])
		{
			if (checkstr(str1, str2, i, len))
				return ((char *)(&str1[i]));
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main() {
// 	// const char *str1 = "";
// 	// const char *str2 = "rytr";
// 	// size_t len = 13;

// 	// char *result = ft_strnstr(NULL, "is", 0);
// 	char *result = ft_strnstr("", "", 0);

// 	if (result) {
// 		printf("1,%s\n", result);
// 	} else {
// 		printf("2,%s\n", result);
// 	}

// 	return 0;
// }