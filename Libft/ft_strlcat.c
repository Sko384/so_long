/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:29:29 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:29:29 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (dest_len + i < size - 1 && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[] = "hello";
// 	char	src[] = "world";
// 	size_t	size;

// 	size = 15;
// 	printf("連結前の文字列：%s\n", dest);
// 	ft_strlcat(dest, src, size);
// 	printf("連結後の文字数：%s\n", dest);
// 	printf("連結後の文字数：%zu\n", ft_strlcat(dest, src, size));
// 	return (0);
// }
