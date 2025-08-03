/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:27:10 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:27:10 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ch;
	size_t			i;

	ch = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ch[i] = c;
		i++;
	}
	return ((void *)ch);
}
// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	c[] = "hello world";
// 	int		d;
// 	size_t	n;

// 	d = 70;
// 	n = 4;
// 	printf("%s\n", (char *)ft_memset(c, d, n));
// 	printf("%s\n", (char *)memset(c, d, n));
// 	return (0);
// }
