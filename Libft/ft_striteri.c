/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 03:29:09 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 03:29:09 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s || !f)
		s[0] = '\0';
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	s[] = "yeah wow yeah";

// 	ft_striteri(s, to_upper);
// 	printf("%s\n", s);
// 	return (0);
// }
