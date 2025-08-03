/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:30:46 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:30:46 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	return (c | (!!ft_isalpha(c) << 5));
}
// #include<stdio.h>
// #include<ctype.h>

// int	main(void)
// {
// 	int	c;

// 	c = 65;
// 	printf("%d\n", ft_tolower((unsigned char)c));
// 	printf("%d\n", tolower((unsigned char)c));
// 	return(0);
// }

// return(c | (!!ft_isalpha(c) << 5))
