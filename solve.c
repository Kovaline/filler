/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikovalen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 14:51:32 by ikovalen          #+#    #+#             */
/*   Updated: 2019/02/07 14:51:34 by ikovalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void 	checkstars(t_info *data)
{
	int i;
	int j;

	i = 0;
	data->stars = 0;
	while (data->piece[i])
	{
		j = 0;
		while (data->piece[i][j])
		{
			if (data->piece[i][j] != '.')
				data->stars++;
			j++;
		}
		i++;
	}
}

int 	tryit(int i, int j, t_info *data)
{
	int x;
	int y;
	int row;
	int col;
	int star;

	x = 0;
	star = 0;
	while (x < data->piecerow)
	{
		y = 0;
		while (y < data->piececol)
		{
			row = i + x;
			col = j + y;
			if (data->piece[x][y] == '*' && row < data->height && col < data->width &&
			data->map[row][col] != data->xoenemy && (data->map[row][col] == '.'
			|| data->map[row][col] == data->xo))
			{
				star++;
				if (data->map[row][col] == data->xo)
					data->checker++;
			}
			y++;
		}
		x++;
	}
	if (star == data->stars && data->checker == 1)
	{
		data->checker = 0;
		return (1);
	}
	else {
		data->checker = 0;
		return (0);
	}
}

void	solve(t_info *data)
{
	int i;
	int j;
	int min;

	i = 0;
	min = -42;
	checkstars(data);
	while (i < data->height)
	{
		j = 0;
		while (j < data->width)
		{
			if (tryit(i, j, data) == 1)
			{
				if (min == -42 || min > ismin(i, j, data))
				{
					min = module(i - data->posenx) - module(j - data->poseny);
					data->coord1 = i;
					data->coord2 = j;
				}
			}
			j++;
		}
		i++;
	}
}
