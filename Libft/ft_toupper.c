/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:30:53 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:30:53 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	return (c & ~(!!ft_isalpha(c) << 5));
}
// #include<stdio.h>
// #include<ctype.h>

// int main(void)
// {
// 	int c = 97;
// 	printf("%d\n", ft_toupper((unsigned char)c));
// 	printf("%d\n", toupper((unsigned char)c));
// 	return(0);
// }

//          00000000
// 			00100000

// 			11111111
// 			11011111

// 'a' == 0b01100001
// 'A' == 0b01000001

// return (c & ~(!!ft_isalpha(c) << 5));

// if (c >= 97 && c <= 122)
// c &= ~32;
// return (c);
