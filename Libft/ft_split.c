/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:28:29 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:28:29 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_word_count(char const *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (count);
}

static int	word_length(char const *str, char c)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

static char	*word_copy(char const *str, char c)
{
	int		i;
	int		word_len;
	char	*result;

	i = 0;
	word_len = word_length(str, c);
	result = malloc(sizeof(char) * (word_len + 1));
	if (!result)
		return (NULL);
	while (i < word_len)
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	**ft_copy_split(char **result, char const *str, char c, int *j)
{
	if (!*str)
		return (result);
	result[*j] = word_copy(str, c);
	if (!result[*j])
	{
		while (--(*j) >= 0)
			free(result[*j]);
		free(result);
		return (NULL);
	}
	(*j)++;
	return (result);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	char	**result;
	int		word_count;

	i = 0;
	j = 0;
	word_count = ft_word_count(str, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		result = ft_copy_split(result, &str[i], c, &j);
		if (!result)
			return (NULL);
		while (str[i] && str[i] != c)
			i++;
	}
	result[j] = 0;
	return (result);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	s[] = ",,,yeah,,,, wow, yeah";
// 	char	c;
// 	int		i;
// 	char	**result;

// 	i = 0;
// 	c = ',';
// 	result = ft_split(s, c);
// 	if (!result)
// 		return (1);
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// 	// printf("%d\n", ft_word_count(s, c));
// 	return (0);
// }
