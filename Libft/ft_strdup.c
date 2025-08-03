/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:28:51 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:28:51 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*array;
	int		i;

	i = 0;
	while (s[i])
		i++;
	array = (char *)malloc(sizeof(char) * (i + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (s[i])
	{
		array[i] = s[i];
		i++;
	}
	array[i] = '\0';
	return (array);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	c[] = "hello world";
// 	char	*dup;

// 	dup = ft_strdup(c);
// 	if(!dup)
// 		return(1);
// 	printf("%s\n", dup);
// 	free(dup);
// 	return (0);
// }
