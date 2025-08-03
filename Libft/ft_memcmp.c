/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:26:47 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:26:47 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ch1;
	unsigned char	*ch2;
	size_t			i;

	ch1 = (unsigned char *)s1;
	ch2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ch1[i] != ch2[i])
			return (ch1[i] - ch2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	a[] = "woe wow";
// 	char	b[] = "wow wow";
// 	size_t	n;

// 	n = 5;
// 	printf("%d\n", ft_memcmp(a, b, n));
// 	printf("%d\n", memcmp(a, b, n));
// 	return (0);
// }
