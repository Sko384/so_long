/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:24:50 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:24:50 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_count(long ln)
{
	int	i;

	i = 1;
	if (ln < 0)
	{
		ln *= -1;
		i++;
	}
	while (ln >= 10)
	{
		i++;
		ln /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	long	ln;
	int		n_len;
	char	*result;

	i = 0;
	ln = (long)n;
	n_len = ft_count(ln);
	result = malloc(sizeof(char) * (n_len + 1));
	if (!result)
		return (NULL);
	if (ln < 0)
	{
		ln *= -1;
		result[i] = '-';
		i++;
	}
	result[n_len] = '\0';
	while (n_len > i)
	{
		result[n_len - 1] = ln % 10 + '0';
		ln /= 10;
		n_len--;
	}
	return (result);
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	n;

// 	n = 0;
// 	printf("%d\n", ft_count(n));
// 	printf("%s\n", ft_itoa(n));
// 	return (0);
// }
