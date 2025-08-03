/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:20:04 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:20:04 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	check_long(long result, char str, int flag)
{
	int	digit;

	digit = str - '0';
	if (flag == 1 && (result > (LONG_MAX - digit) / 10))
		return (1);
	if (flag == -1 && (-result < (LONG_MIN + digit) / 10))
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	result;
	int		flag;

	i = 0;
	result = 0;
	flag = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			flag = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (check_long(result, str[i], flag) == 1)
			return ((int)LONG_MAX);
		if (check_long(result, str[i], flag) == -1)
			return ((int)LONG_MIN);
		result = result * 10 + str[i] - '0';
		i++;
	}
	return ((int)(flag * result));
}
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	printf("%d\n", ft_atoi("  \t\f\n\r\v -23432678123"));
// 	printf("%d\n", atoi("  \t\f\n\r\v -23432678123"));
// }
