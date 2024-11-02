/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:47:57 by msawada           #+#    #+#             */
/*   Updated: 2024/03/02 18:07:13 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_char(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*str_copy(char const *s1, unsigned int start, unsigned int end)
{
	unsigned int	i;
	char			*str;

	str = (char *)malloc(sizeof(char) * (end - start + 2));
	if (str == NULL)
		return (NULL);
	i = 0;
	while ((start + i) <= end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;

	start = 0;
	end = 0;
	if (s1 == NULL)
		return (NULL);
	if (*s1 == '\0')
		return (str_copy(s1, 0, 0));
	if (*set == '\0')
		return (str_copy(s1, 0, ft_strlen(s1)));
	while (s1[start] && check_char(s1[start], set))
	{
		start++;
	}
	end = ft_strlen(s1) - 1;
	while (end > start && check_char(s1[end], set))
	{
		end--;
	}
	return (str_copy(s1, start, end));
}
