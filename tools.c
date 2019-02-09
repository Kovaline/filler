/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikovalen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 14:26:58 by ikovalen          #+#    #+#             */
/*   Updated: 2019/02/09 14:27:00 by ikovalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int 	module(int x)
{
	return(x < 0 ? -x : x);
}

void	checkpos(t_info *data)
{
	int i;
	int j;

	i = 0;
	while (i < data->height)
	{
		j = 0;
		while (j < data->width)
		{
			if (data->map[i][j] == data->xo)
			{
				data->posmex = i;
				data->posmey = j;
			}
			if (data->map[i][j] == data->xoenemy)
			{
				data->posenx = i;
				data->poseny = j;
			}
			j++;
		}
		i++;
	}
	data->topbot = (data->posmex > data->posenx) ? 1 : 0;
}

void	closestenemy(t_info *data)
{
	int i;
	int j;

	i = 0;
	while (i < data->height)
	{
		j = 0;
		while (j < data->width)
		{
			if (data->map[i][j] == data->xoenemy)
			{
				data->posenx = i;
				data->poseny = j;
			}
			j++;
		}
		i++;
	}
}

void	closestenemy2(t_info *data)
{
	int i;
	int j;

	i = data->height - 1;
	while (i > 0)
	{
		j = data->width - 1;
		while (j > 0)
		{
			if (data->map[i][j] == data->xoenemy)
			{
				data->posenx = i;
				data->poseny = j;
			}
			j--;
		}
		i--;
	}
}

int		ismin(int i, int j, t_info *data)
{
	int x;

	checkpos(data);
	if (data->topbot == 1)
		//closestenemy(data);
	if (data->topbot == 0)
		closestenemy2(data);
	x = module(i - data->posenx) - module(j - data->poseny);
	return (x);
}
