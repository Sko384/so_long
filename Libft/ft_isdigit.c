/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:23:56 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:23:56 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (c);
	return (0);
}
// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	ch;

// 	ch = '0';
// 	if (ft_isdigit(ch))
// 		printf("'%c' は数字です\n", ch);
// 	else
// 		printf("'%c' は数字ではありません\n", ch);
// 	if (isdigit(ch))
// 		printf("'%c' は数字です\n", ch);
// 	else
// 		printf("'%c' は数字ではありません\n", ch);
// 	return (0);
// }
