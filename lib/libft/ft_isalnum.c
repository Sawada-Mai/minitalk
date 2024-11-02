/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:44:21 by msawada           #+#    #+#             */
/*   Updated: 2024/03/02 15:19:18 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("%d\n", ft_isalnum('4'));
// 	printf("%d\n\n", isalnum('4'));
// 	printf("%d\n", ft_isalnum('t'));
// 	printf("%d\n\n", isalnum('t'));
// 	printf("%d\n", ft_isalnum('*'));
// 	printf("%d\n", isalnum('*'));
// }