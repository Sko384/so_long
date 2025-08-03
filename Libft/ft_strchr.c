/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:28:38 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:28:38 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	uc;

	i = 0;
	uc = (unsigned char)c;
	while (s[i])
	{
		if ((unsigned char)s[i] == uc)
			return ((char *)(s + i));
		i++;
	}
	if (uc == '\0')
		return ((char *)(s + i));
	return (NULL);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	s[] = "hello world";
// 	int		c;

// 	c = 0;
// 	printf("%s\n", ft_strchr(s, c));
// 	printf("%s\n", strchr(s, c));
// 	return (0);
// }

// int c = 256 でオーバーフロー処理ができているか
