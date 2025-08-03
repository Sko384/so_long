/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:23:29 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:23:29 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (c);
	return (0);
}
// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	ch;

// 	ch = 48;
// 	if (ft_isalnum(ch))
// 		printf("'%c' は英数字です\n", ch);
// 	else
// 		printf("'%c' は英数字ではありません\n", ch);
// 	if (isalnum(ch))
// 		printf("'%c' は英数字です\n", ch);
// 	else
// 		printf("'%c' は英数字ではありません\n", ch);
// 	return (0);
// }
