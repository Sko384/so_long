/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:24:07 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:24:07 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isprint(33));
// 	printf("%d\n", isprint(33));
// 	return (0);
// }
