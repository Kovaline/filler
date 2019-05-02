/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vizual.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikovalen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 14:29:32 by ikovalen          #+#    #+#             */
/*   Updated: 2019/02/22 13:40:50 by ikovalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../filler.h"
#include "viz.h"

void	readmaploop(t_pr *mlx)
{
	char	*line;
	int		i;

	i = 0;
	if (mlx->field != NULL)
	{
		while (mlx->field[i])
		{
			ft_strdel(&mlx->field[i]);
			i++;
		}
		ft_strdel(mlx->field);
	}
	else
		mlx->field = (char **)malloc(mlx->mapheight * sizeof(char *) + 1);
	i = 0;
	get_next_line(0, &line);
	free(line);
	while (i < mlx->mapheight)
	{
		get_next_line(0, &line);
		mlx->field[i] = ft_strdup(line + 4);
		free(line);
		i++;
	}
}

void	readmap(t_pr *mlx)
{
	char	*line;
	int		i;

	while (get_next_line(0, &line) > 0)
	{
		if (ft_strncmp(line, "Plateau", 6) == 0)
			break ;
		free(line);
	}
	i = 8;
	mlx->mapheight = ft_atoi(&line[i]);
	while (line[i] >= '0' && line[i] <= '9')
		i++;
	mlx->mapwidth = ft_atoi(&line[i + 1]);
	mlx->field = (char **)malloc(mlx->mapheight * sizeof(char *) + 1);
	HELP;
	i = 0;
	while (i < mlx->mapheight)
	{
		get_next_line(0, &line);
		mlx->field[i] = ft_strdup(line + 4);
		free(line);
		i++;
	}
	mlx->field[i] = NULL;
}

void	drawfirstmap(t_pr *mlx)
{
	int i;
	int j;

	i = 0;
	while (i < mlx->mapheight)
	{
		j = 0;
		while (j < mlx->mapwidth)
		{
			if (mlx->field[i][j] == 'X' || mlx->field[i][j] == 'x')
				drawsquare(mlx, mlx->size, mlx->colorx);
			else if (mlx->field[i][j] == 'O' || mlx->field[i][j] == 'o')
				drawsquare(mlx, mlx->size, mlx->coloro);
			else
				drawsquare(mlx, mlx->size, mlx->colord);
			mlx->x = mlx->x + mlx->size;
			j++;
		}
		mlx->y = mlx->y + mlx->size;
		mlx->x = (1920 - mlx->mapwidth * mlx->size) / 2;
		i++;
	}
}

int		loopfunc(t_pr *mlx)
{
	char	*line;

	if (mlx->stop == 0)
	{
		img(mlx);
		mlx->x = (1920 - mlx->mapwidth * mlx->size) / 2;
		mlx->y = (1080 - mlx->mapheight * mlx->size) / 2;
		readmaploop(mlx);
		drawfirstmap(mlx);
		mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->img_ptr, 0, 0);
		mlx_destroy_image(mlx->mlx_ptr, mlx->img_ptr);
		createlegend(mlx);
	}
	while (get_next_line(0, &line) > 0)
	{
		if (ft_strncmp(line, "Plateau", 6) == 0)
			break ;
		if (line[0] == '=')
		{
			SOS;
		}
		free(line);
	}
	free(line);
	return (0);
}

int		main(void)
{
	t_pr mlx;

	mlx.stop = 0;
	mlx.mlx_ptr = mlx_init();
	mlx.win_ptr = mlx_new_window(mlx.mlx_ptr, 1920, 1080, "Filler");
	readmap(&mlx);
	if (mlx.mapheight < 16)
		mlx.size = 40;
	else if (mlx.mapheight > 15 && mlx.mapheight < 25)
		mlx.size = 22;
	else if (mlx.mapheight > 24 && mlx.mapheight < 31)
		mlx.size = 20;
	else if (mlx.mapheight > 30)
		mlx.size = 7;
	mlx.x = (1920 - mlx.mapwidth * mlx.size) / 2;
	mlx.y = (1080 - mlx.mapheight * mlx.size) / 2;
	mlx.colorx = 8721172;
	mlx.coloro = 3124582;
	mlx.colord = 3112365;
	mlx_hook(mlx.win_ptr, 2, 2, hookthekey, &mlx);
	mlx_loop_hook(mlx.mlx_ptr, loopfunc, &mlx);
	mlx_loop(mlx.mlx_ptr);
}
