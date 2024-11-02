/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:37:50 by msawada           #+#    #+#             */
/*   Updated: 2024/03/02 14:46:44 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
// 	printf("%d\n", ft_isdigit('4'));
// 	printf("%d\n\n", isdigit('4'));
// 	printf("%d\n", ft_isdigit('T'));
// 	printf("%d\n\n", isdigit('T'));
// 	printf("%d\n", ft_isdigit('*'));
// 	printf("%d\n", isdigit('*'));
// }