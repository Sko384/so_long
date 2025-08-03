/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:27:03 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:27:03 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*de;
	unsigned char	*sr;

	if (dest == src || n == 0)
		return (dest);
	de = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (de < sr)
	{
		while (n--)
			*de++ = *sr++;
	}
	else
	{
		de += n;
		sr += n;
		while (n--)
			*(--de) = *(--sr);
	}
	return (dest);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	buffer[20] = "hello world";
// 	char	buffer2[20] = "hello world";

// 	// 重なりがある状況をテスト
// 	ft_memmove(buffer + 1, buffer, 11);
// 	printf("Result: %s\n", buffer);
// 	memmove(buffer2 + 1, buffer2, 11);
// 	printf("Result: %s\n", buffer2);
// 	return (0);
// }
