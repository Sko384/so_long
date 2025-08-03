/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:30:30 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:30:30 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	is_trim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	int		i;
	char	*result;

	start = 0;
	end = ft_strlen(s1);
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && is_trim(s1[start], set))
		start++;
	while (end > start && is_trim(s1[end - 1], set))
		end--;
	result = malloc(sizeof(char) * end - start + 1);
	if (!result)
		return (NULL);
	while (start < end)
	{
		result[i] = s1[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "1234ABBCA1133241";
// 	char	set[] = "12345";

// 	printf("%s\n", ft_strtrim(s1, set));
// 	return (0);
// }
