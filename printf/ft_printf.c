/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-07 09:38:22 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-05-07 09:38:22 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_print_c(va_list args)
{
	int				val;
	unsigned char	c;

	val = va_arg(args, int);
	c = (char)val;
	return (write(1, &c, 1));
}

static int	ft_print_per(char per)
{
	return (write(1, &per, 1));
}

static int	ft_print_s(va_list args)
{
	char	*val;
	int		count;

	count = 0;
	val = va_arg(args, char *);
	if (!val)
		return (write(1, "(null)", 6));
	while (val[count])
	{
		write(1, &val[count], 1);
		count++;
	}
	return (count);
}

static int	ft_conversions(const char c, va_list args)
{
	int	word_count;

	word_count = 0;
	if (c == 'c')
		word_count = (ft_print_c(args));
	else if (c == '%')
		word_count = (ft_print_per('%'));
	else if (c == 's')
		word_count = (ft_print_s(args));
	else if (c == 'p')
		word_count = (ft_print_p(args));
	else if (c == 'd' || c == 'i')
		word_count = (ft_print_d(args));
	else if (c == 'u')
		word_count = (ft_print_u(args));
	else if (c == 'x')
		word_count = (ft_print_x(args, c, "0123456789abcdef", 16));
	else if (c == 'X')
		word_count = (ft_print_x(args, c, "0123456789ABCDEF", 16));
	return (word_count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
			i++;
		}
		else if (format[i] == '%' && format[i + 1])
		{
			count += ft_conversions(format[++i], args);
			i++;
		}
	}
	va_end(args);
	return (count);
}
// #include <limits.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int				count;
// 	int				count_t;
// 	int				d;
// 	unsigned int	ui;
// 	char			c[] = "wow wow";

// 	d = 12345;
// 	ui = -1;
// 	// ft_printf("abcde%c%s%p %d %i\n", 'F', "what?\n", c, -0, 12345);
// 	count = ft_printf(" %c %c %c \n", '0', 0, '1');
// 	count_t = printf(" %c %c %c \n", '0', 0, '1');
// 	printf("\n文字数：%d\n", count);
// 	printf("文字数：%d\n", count_t);
// 	// ft_printf("%c\n", '0');
// 	// printf("%c\n", '0');
// 	return (0);
// }

// void	print_section(const char *title)
// {
// 	printf("\n========== %s ==========\n", title);
// }
