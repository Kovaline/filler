/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikovalen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 13:37:30 by ikovalen          #+#    #+#             */
/*   Updated: 2019/03/11 13:03:45 by ikovalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "viz.h"
#include "../filler.h"

void	drawsquare(t_pr *mlx, int size, int color)
{
	int y;
	int i;
	int x;
	int j;

	x = mlx->x;
	y = mlx->y;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			mlx->imgdata[y * 1920 + x] = color;
			x++;
			j++;
		}
		y++;
		x = mlx->x;
		i++;
	}
}

int		hookthekey(int keycode, t_pr *mlx)
{
	if (keycode == 53)
	{
		mlx_destroy_window(mlx->mlx_ptr, mlx->win_ptr);
		exit(0);
	}
	return (1);
}

void	createlegend(t_pr *mlx)
{
	void	*wm;
	void	*mp;
	int		y;
	int		col;

	y = 0;
	col = 16777215;
	mp = mlx->mlx_ptr;
	wm = mlx->win_ptr;
	mlx_string_put(mp, wm, 200, 1080 / 2 - 200, col, "Filler:");
	mlx_string_put(mp, wm, 200, 1080 / 2 - 180, col, "O (Player 1) - ");
	mlx_string_put(mp, wm, 200, 1080 / 2 - 180,
		3124582, "               Green");
	mlx_string_put(mp, wm, 200, 1080 / 2 - 160, col, "X (Player 2) - ");
	mlx_string_put(mp, wm, 200, 1080 / 2 - 160,
		8721172, "               Red");
}

void	drawwinner(char *line, t_pr *mlx)
{
	int oscore;
	int xscore;

	oscore = ft_atoi(&line[10]);
	get_next_line(0, &line);
	xscore = ft_atoi(&line[10]);
	if (oscore > xscore)
		mlx_string_put(mlx->mlx_ptr, mlx->win_ptr,
			1920 / 2 - 100, 120, 3124582, "Player 1 WINS");
	else if (xscore > oscore)
		mlx_string_put(mlx->mlx_ptr, mlx->win_ptr,
			1920 / 2 - 100, 120, 8721172, "Player 2 WINS");
	else
		mlx_string_put(mlx->mlx_ptr, mlx->win_ptr,
			1920 / 2 - 100, 120, 16777215, "ITS A DRAW...");
	free(line);
}

void	img(t_pr *mlx)
{
	int		bpp;
	int		sl;
	int		e;

	mlx->img_ptr = mlx_new_image(mlx->mlx_ptr, 1920, 1080);
	mlx->imgdata = (int*)mlx_get_data_addr(mlx->img_ptr, &bpp, &sl, &e);
}
