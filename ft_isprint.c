/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 17:01:19 by msawada           #+#    #+#             */
/*   Updated: 2024/03/02 14:46:49 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("%d\n", ft_isprint('4'));
// 	printf("%d\n\n", isprint('4'));
// 	printf("%d\n", ft_isprint(' '));
// 	printf("%d\n\n", isprint(' '));
// 	printf("%d\n", ft_isprint('\n'));
// 	printf("%d\n", isprint('\n'));
// }