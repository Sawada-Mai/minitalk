/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:48:34 by msawada           #+#    #+#             */
/*   Updated: 2024/04/21 16:03:39 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	free_strage(char **sp)
{
	int	i;

	i = 0;
	while (sp[i])
	{
		free(sp[i]);
		i++;
	}
	free(sp);
	return (1);
}

char	*ft_storage(const char *s, int start, int end)
{
	unsigned int	i;
	unsigned int	size;
	char			*str;

	size = end - start;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**make_str_split(char const *s, char c, char **sp)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	start;

	i = 0;
	j = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != '\0' && s[i] != c)
				i++;
			sp[j] = ft_storage(s, start, i);
			if (sp[j] == NULL)
				free_strage(sp);
			j++;
		}
		else
			i++;
	}
	sp[j] = NULL;
	return (sp);
}

int	count_splits(char const *s, char c)
{
	unsigned int	n;
	unsigned int	flag;

	n = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			n++;
			flag = 1;
		}
		else if (*s == c)
		{
			flag = 0;
		}
		s++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	char			**sp;
	unsigned int	split_count;

	if (s == NULL)
		return (NULL);
	split_count = count_splits(s, c);
	sp = (char **)malloc(sizeof(char *) * (split_count + 1));
	if (sp == NULL)
		return (NULL);
	return ((char **)(make_str_split(s, c, sp)));
}

// #include <stdio.h>
// int main(void)
// {
// 	char s[] = "  Hello, how are you  today?   ";
// 	char c = ' ';
// 	int count;

// 	count = count_splits(s, c);
// 	printf("%d\n", count);

// 	return 0;
// }