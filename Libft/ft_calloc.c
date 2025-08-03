/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:20:30 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:20:30 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (~0ul / size < nmemb)
		return (NULL);
	mem = (char *)malloc(sizeof(char) * size * nmemb);
	if (!mem)
		return (NULL);
	ft_bzero(mem, size * nmemb);
	return (mem);
}
// #include <stdio.h>

// int	main(void)
// {
// 	size_t	n;
// 	int		*arr;

// 	n = 5;
// 	arr = (int *)ft_calloc(n, sizeof(int));
// 	if (!arr)
// 	{
// 		printf("ft_calloc failed!\n");
// 		return (1);
// 	}
// 	printf("ft_calloc succeeded. Contents:\n");
// 	for (size_t i = 0; i < n; i++)
// 	{
// 		printf("arr[%zu] = %d\n", i, arr[i]);
// 	}
// 	free(arr);
// 	return (0);
// }
