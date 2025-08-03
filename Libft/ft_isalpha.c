/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:23:37 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:23:37 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (_ISalpha);
	return (0);
}
// #include<stdio.h>
// #include<ctype.h>

// int main(void)
// {
// 	int c = 65;
// 	printf("%d\n", ft_isalpha(c));
// 	printf("%d\n", isalpha(c));
// 	return(0);
// }
