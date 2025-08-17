/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmiyosh <shmiyosh@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-07-30 07:03:42 by shmiyosh          #+#    #+#             */
/*   Updated: 2025-07-30 07:03:42 by shmiyosh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
#include <errno.h>
#include <string.h>

char	**load_map(const char *filename, int *w, int *h)
{
	int		fd;
	char	buf[1024];
	int		len;
	int		total_len;
	char	*temp;
	char	*new_temp;
	int		lines;
	char	**map;
	char	*p;
	int		i;
	int		max_width;
	int		l;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		fprintf(stderr, "Error opening file '%s': %s\n", filename,
			strerror(errno));
		return (NULL);
	}
	len = 0;
	total_len = 0;
	temp = NULL;
	while ((len = read(fd, buf, 1023)) > 0)
	{
		buf[len] = '\0';
		new_temp = realloc(temp, total_len + len + 1);
		if (!new_temp)
		{
			free(temp);
			close(fd);
			return (NULL);
		}
		temp = new_temp;
		ft_memcpy(temp + total_len, buf, len);
		total_len += len;
		temp[total_len] = '\0';
	}
	close(fd);
	if (len < 0 || total_len == 0)
	{
		fprintf(stderr, "Error reading file '%s' or empty file\n", filename);
		free(temp);
		return (NULL);
	}
	lines = 0;
	for (int i = 0; i < total_len; i++)
		if (temp[i] == '\n')
			lines++;
	if (temp[total_len - 1] != '\n')
		lines++;
	map = malloc(sizeof(char *) * lines);
	if (!map)
	{
		free(temp);
		return (NULL);
	}
	p = temp;
	i = 0;
	max_width = 0;
	for (i = 0; i < lines; i++)
	{
		l = 0;
		while (p[l] && p[l] != '\n')
			l++;
		map[i] = malloc(l + 1);
		if (!map[i])
		{
			while (i-- > 0)
				free(map[i]);
			free(map);
			free(temp);
			return (NULL);
		}
		ft_memcpy(map[i], p, l);
		map[i][l] = '\0';
		if (l > max_width)
			max_width = l;
		p += l + (p[l] == '\n' ? 1 : 0);
	}
	free(temp);
	*h = lines;
	*w = max_width;
	return (map);
}

void	draw_map(void *mlx, void *win, char **map, int w, int h)
{
	int i, j, x, y, c;
	for (i = 0; i < h; i++)
		for (j = 0; j < w; j++)
		{
			if (map[i][j] == '0')
				c = 0xFFFFFF;
			else if (map[i][j] == '1')
				c = 0x000000;
			else if (map[i][j] == 'C')
				c = 0xFFFF00;
			else if (map[i][j] == 'E')
				c = 0xFF0000;
			else if (map[i][j] == 'P')
				c = 0x0000FF;
			else
				c = 0x888888;
			for (y = 0; y < 32; y++)
				for (x = 0; x < 32; x++)
					mlx_pixel_put(mlx, win, j * 32 + x, i * 32 + y, c);
		}
}

int	main(void)
{
	char	**map;
	void	*mlx;
	void	*win;

	int w, h;
	map = load_map("maps/map1.ber", &w, &h);
	if (!map || w <= 0 || h <= 0)
	{
		fprintf(stderr,
			"Error: Invalid map dimensions or failed to load map\n");
		return (1);
	}
	printf("w=%d, h=%d\n", w, h);
	mlx = mlx_init();
	if (!mlx)
	{
		fprintf(stderr, "Error: Failed to initialize mlx\n");
		for (int i = 0; i < h; i++)
			free(map[i]);
		free(map);
		return (1);
	}
	win = mlx_new_window(mlx, w * 32, h * 32, "so_long map");
	if (!win)
	{
		fprintf(stderr, "Error: Failed to create window\n");
		for (int i = 0; i < h; i++)
			free(map[i]);
		free(map);
		return (1);
	}
	draw_map(mlx, win, map, w, h);
	mlx_loop(mlx);
	for (int i = 0; i < h; i++)
		free(map[i]);
	free(map);
	return (0);
}
