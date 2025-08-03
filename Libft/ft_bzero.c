/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:20:20 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:20:20 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	b[] = "welcome world";
// 	char	c[] = "hello world";
// 	size_t	n;

// 	n = 1;
// 	ft_bzero(b, n);
// 	printf("%s\n", b);
// 	bzero(c, n);
// 	printf("%s\n", c);
// 	return (0);
// }
