/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:30:22 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:30:22 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	uc;

	len = ft_strlen(s);
	uc = (unsigned char)c;
	while (len >= 0)
	{
		if ((unsigned const char)s[len] == uc)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	s[] = "hello world";
// 	int		c;

// 	c = 256;
// 	printf("%s\n", ft_strrchr(s, c));
// 	printf("%s\n", strrchr(s, c));
// 	return (0);
// }
