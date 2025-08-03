/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:26:56 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:26:56 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ch1;
	unsigned char	*ch2;
	size_t			i;

	ch1 = (unsigned char *)dest;
	ch2 = (unsigned char *)src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		ch1[i] = ch2[i];
		i++;
	}
	return (dest);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	a[] = "";
// 	char	b[] = "wow wow";
// 	size_t	n;

// 	n = 15;
// 	printf("%s\n", (char *)ft_memcpy(a, b, n));
// 	printf("%s\n", (char *)memcpy(a, b, n));
// 	return (0);
// }
