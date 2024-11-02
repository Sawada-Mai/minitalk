/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:08:51 by msawada           #+#    #+#             */
/*   Updated: 2024/03/02 14:54:16 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 'a' - 'A';
	}
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("%c\n", ft_toupper('t'));
// 	printf("%c\n\n", toupper('t'));
// 	printf("%c\n", ft_toupper('T'));
// 	printf("%c\n\n", ft_toupper('T'));
// 	printf("%c\n", ft_toupper('2'));
// 	printf("%c\n", toupper('2'));
// }