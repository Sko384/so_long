/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:30:04 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:30:04 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*us1;
	const unsigned char	*us2;

	us1 = (const unsigned char *)s1;
	us2 = (const unsigned char *)s2;
	i = 0;
	while ((us1[i] || us2[i]) && i < n)
	{
		if (us1[i] == us2[i])
			i++;
		else if (us1[i] < us2[i] || us1[i] > us2[i])
			return (us1[i] - us2[i]);
	}
	return (0);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	a[] = "abcde";
// 	char	b[] = "ab";
// 	size_t	n;

// 	n = 5;
// 	printf("%d\n", ft_strncmp(a, b, n));
// 	printf("%d\n", strncmp(a, b, n));
// }
