/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-30 07:03:42 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-07-30 07:03:42 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	main(void)
{
	int		width;
	int		height;
	void	*mlx;
	void	*mlx_win;

	int i, j;
	width = 1000;
	height = 1000;
	mlx = mlx_init();
	if (!mlx)
		return (1);
	mlx_win = mlx_new_window(mlx, width, height, "test");
	if (!mlx_win)
		return (1);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			mlx_pixel_put(mlx, mlx_win, i, j, 127);
		}
	}
	mlx_loop(mlx);
	return (0);
}
