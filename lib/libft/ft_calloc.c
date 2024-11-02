/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msawada <msawada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:36:18 by msawada           #+#    #+#             */
/*   Updated: 2024/03/02 15:26:16 by msawada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	i;

	i = 0;
	if (count != 0 && size != 0 && SIZE_MAX / count < size)
		return (NULL);
	else if (size == SIZE_MAX)
		return (NULL);
	if (count == 0 || size == 0)
		i = 1;
	else
		i = count * size;
	p = (void *) malloc(i);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, i);
	return (p);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main() {
// 	int n = 0;
// 	int *arr = (int*) calloc(0, 0);

// 	if (arr == NULL) {
// 		printf("メモリの確保に失敗しました。\n");
// 		return 1;
// 	}

// 	for (int i = 0; i < n; i++) {
// 		arr[i] = i;
// 		printf("%d", arr[i]);
// 	}

// 	free(arr);
// 	return 0;
// }