/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-08 05:49:22 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-07-08 05:49:22 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "Libft/libft.h"
# include "get_next_line/get_next_line.h"
# include "minilibx-linux/mlx.h"
# include "printf/ft_printf.h"
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_point
{
	int		x;
	int		y;
}			t_point;

typedef struct s_map
{
	char	**grid;
	int		width;
	int		height;
	int		p_count;
	int		c_count;
	int		e_count;
	int		p_x;
	int		p_y;
}			t_map;

typedef struct s_img
{
	void	*wall;
	void	*floor;
	void	*player;
	void	*collectible;
	void	*exit;
}			t_img;

typedef struct s_game
{
	void	*mlx;
	void	*win;
	t_map	*map;
	t_img	img;
	int		move_count;
	char	tile_under_player;
}			t_game;

#endif
