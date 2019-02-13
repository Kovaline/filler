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

int		module(int x)
{
	return (x < 0 ? -x : x);
}

int		ismin(int i, int j, t_info *data)
{
	int min;
	int x;
	int y;
	int check;

	x = 0;
	min = 5000;
	while (x < data->height)
	{
		y = 0;
		while (y < data->width)
		{
			if (data->map[x][y] == data->xoenemy)
			{
				check = module(x - i) + module(y - j);
				if (check < min)
					min = check;
			}
			y++;
		}
		x++;
	}
	return (min);
}
