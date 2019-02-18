/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vizual.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikovalen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 14:29:32 by ikovalen          #+#    #+#             */
/*   Updated: 2019/02/17 15:12:34 by ikovalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../filler.h"
#include "viz.h"
#include <stdio.h>
void	readmap(t_pr *mlx)
{
	char *line;
	int i;

	while (get_next_line(0, &line) > 0)
		if (ft_strncmp(line, "Plateau", 6) == 0)
			break ;
	i = 8;
	mlx->mapheight = ft_atoi(&line[i]);
	while (line[i] >= '0' && line[i] <= '9')
		i++;
	mlx->mapwidth = ft_atoi(&line[i + 1]);
	mlx->field = (char **)malloc(mlx->mapheight * sizeof(char *) + 1);
	get_next_line(0, &line);
	free (line);
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

int main()
{
	t_pr mlx;
	mlx.mlx_ptr = mlx_init();
	mlx.win_ptr = mlx_new_window(mlx.mlx_ptr, 1280, 720, "Filler");

	readmap(&mlx);
	img(&mlx);
	//int k = 0;
	//int l = 0;
	int i = 0;
	int j = 0;
	int x = 20;
	int y = 20;
	mlx.colorx = 16711684;
	mlx.coloro = 3124582;
	mlx.colord = 3112365;
	/*while (i < mlx.mapheight)
	{
		printf("%s\n", "111");
		
		l = 0;
		while(l < 20)
		{
			j = 0;
			while (j < mlx.mapwidth)
			{
				printf("%s\n", "222");
				l = 0;

					printf("%s\n", "33");
					k = 0;
					while (k < 20)
					{
						printf("%s\n", "444");
						printf("%c\n", mlx.field[i][j]);
						printf("%s\n i = %i\n j = %i\n k = %i\n l = %i\n x = %i\n y = %i\n", mlx.field[i], i, j, k, l, x, y);
						if (mlx.field[i][j] == 'X')
							mlx.imgdata[y * 1280 + x] = mlx.colorx;
						else if (mlx.field[i][j] == 'O')
							mlx.imgdata[y * 1280 + x] = mlx.coloro;
						else
							mlx.imgdata[y * 1280 + x] = mlx.colord;
						x++;
						k++;
					}
				j++;	
			}
			x = 20;
			y++;
			l++;
		}
		x = 20;
		i++;
	}*/

	while (i < mlx.mapheight)
	{
		while (j < mlx.mapwidth)
		{
			if (mlx.field[i][j] == 'X')
			{
				mlx.imgdata[y * 1280 + x] = mlx.colorx;
				mlx.imgdata[(y + 30) * 1280 + x] = mlx.colorx;
				mlx.imgdata[y * 1280 + (x + 30)] = mlx.colorx;
				mlx.imgdata[(y + 30) * 1280 + (x + 30)] = mlx.colorx;
			}
			else if (mlx.field[i][j] == 'O')
			{
				mlx.imgdata[y * 1280 + x] = mlx.coloro;
				mlx.imgdata[(y + 30) * 1280 + x] = mlx.coloro;
				mlx.imgdata[y * 1280 + (x + 30)] = mlx.coloro;
				mlx.imgdata[(y + 30) * 1280 + (x + 30)] = mlx.coloro;
			}
			else
			{
				mlx.imgdata[y * 1280 + x] = mlx.colord;
				mlx.imgdata[(y + 30) * 1280 + x] = mlx.colord;
				mlx.imgdata[y * 1280 + (x + 30)] = mlx.colord;
				mlx.imgdata[(y + 30) * 1280 + (x + 30)] = mlx.colord;
			}
			x = x + 31;
			j++;
		}
		x = 20;
		y = y + 31;
		j = 0;
		i++;
	}





	mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr, mlx.img_ptr, 0, 0);
	mlx_loop(mlx.mlx_ptr);
}