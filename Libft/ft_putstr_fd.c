/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:28:04 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:28:04 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = ft_strlen(s);
	write(fd, s, len);
}
// #include <fcntl.h>

// int	main(void)
// {
// 	int	fd;
// 	char c[] = "hello";

// 	fd = open("output2.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd < 0)
// 		return (1);
// 	ft_putstr_fd(c, fd);
// 	close(fd);
// 	return (0);
// }
