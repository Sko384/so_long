/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:26:37 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:26:37 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ch;
	unsigned char	uc;
	size_t			i;

	ch = (unsigned char *)s;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ch[i] == uc)
			return ((void *)(ch + i));
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s[] = "hello world";
// 	int		c;
// 	size_t	n;

// 	c = 108;
// 	n = 4;
// 	printf("%s\n", (char *)ft_memchr(s, c, n));
// 	printf("%s\n", (char *)memchr(s, c, n));
// 	return (0);
// }
