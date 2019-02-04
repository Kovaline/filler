/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikovalen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 13:25:16 by ikovalen          #+#    #+#             */
/*   Updated: 2019/01/31 13:25:26 by ikovalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

/*void	start(t_info *data);
{
	char *line;

	while (get_next_line(0, &line) > 0)
	{
		if (ft_strncmp(line, "Piece", 4) == 0)

	}
}*/

void	takedata(t_info *data)
{
	int i;
	char *line;

	get_next_line(0, &line);
	data->player = ft_atoi(&line[10]);
	get_next_line(0, &line);
	i = 8;
	data->height = ft_atoi(&line[i]);
	while (line[i] >= '0' && line[i] <= '9')
		i++;
	data->width = ft_atoi(&line[i + 1]);
	if (data->player == 1)
	{
		data->xo = 'O';
		data->xoenemy = 'X';
	}
	else
	{
		data->xo = 'X';
		data->xoenemy = 'O';
	}
}

void	reset(t_info *data)
{
	data->player = 0;
	data->height = 0;
	data->width = 0;
	data->xo = 0;
	data->xoenemy = 0;
}

int		main(void)
{
	t_info	data;

	reset(&data);
	takedata(&data);
	//start(&data);
	ft_putnbr(3);
	ft_putchar(' ');
	ft_putnbr(6);
	ft_putchar('\n');
	//ft_printf("%i %i %i %c %c", data.player, data.height, data.width, data.xoenemy, data.xo);
	return (0);
}