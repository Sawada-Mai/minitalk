/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:28:12 by msawada           #+#    #+#             */
/*   Updated: 2024/03/02 14:46:27 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("%d\n", ft_isalpha('t'));
// 	printf("%d\n\n", isalpha('t'));
// 	printf("%d\n", ft_isalpha('4'));
// 	printf("%d\n\n", isalpha('4'));
// 	printf("%d\n", ft_isalpha('*'));
// 	printf("%d\n", isalpha('*'));
// }