/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 15:32:42 by shmiyosh          #+#    #+#             */
/*   Updated: 2025/05/24 15:05:42 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*append_and_check(ssize_t read_size, char *buffer, char *remainder)
{
	char	*joined;

	if (read_size == -1)
		return (free(buffer), free(remainder), NULL);
	buffer[read_size] = '\0';
	joined = ft_strjoin_gnl(remainder, buffer);
	free(remainder);
	if (!joined)
		return (free(buffer), NULL);
	return (joined);
}

static char	*read_until_newline(int fd, char *remainder)
{
	char	*buffer;
	ssize_t	read_size;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (free(remainder), NULL);
	read_size = 1;
	while (!ft_strchr_gnl(remainder, '\n') && read_size > 0)
	{
		read_size = read(fd, buffer, BUFFER_SIZE);
		remainder = append_and_check(read_size, buffer, remainder);
		if (!remainder)
			return (NULL);
	}
	free(buffer);
	if (!remainder || *remainder == '\0')
		return (free(remainder), NULL);
	return (remainder);
}

static char	*extract_line(char *remainder, char *newline_pos)
{
	char	*newline;

	if (newline_pos)
		newline = ft_substr_gnl(remainder, 0, newline_pos - remainder + 1);
	else
		newline = ft_strdup_gnl(remainder);
	return (newline);
}

static char	*update_remainder(char *remainder, char *newline_pos)
{
	char	*temp;

	if (newline_pos && *(newline_pos + 1) != '\0')
	{
		temp = ft_strdup_gnl(newline_pos + 1);
		if (!temp)
			return (NULL);
	}
	else
		temp = NULL;
	free(remainder);
	return (temp);
}

char	*get_next_line(int fd)
{
	static char	*remainder;
	char		*newline;
	char		*newline_pos;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	remainder = read_until_newline(fd, remainder);
	if (!remainder || *remainder == '\0')
		return (free(remainder), remainder = NULL, NULL);
	newline_pos = ft_strchr_gnl(remainder, '\n');
	newline = extract_line(remainder, newline_pos);
	if (!newline)
		return (free(remainder), remainder = NULL, NULL);
	remainder = update_remainder(remainder, newline_pos);
	return (newline);
}
// #include <fcntl.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int		fd;
// 	char	*line;

// 	fd = open("one_char.txt", O_RDONLY);
// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		printf("%s",line);
// 		free(line);
// 	}
// 	printf("\n");
// 	close(fd);
// 	return (0);
// }
