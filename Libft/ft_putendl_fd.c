/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:27:34 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:27:34 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	s_len;

	s_len = ft_strlen(s);
	write(fd, s, s_len);
	write(fd, "\n", 1);
}
// #include <fcntl.h>

// int	main(void)
// {
// 	int	fd;
// 	char c[] = "hello";

// 	fd = open("output3.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd < 0)
// 		return (1);
// 	ft_putendl_fd(c, fd);
// 	close(fd);
// 	return (0);
// }
