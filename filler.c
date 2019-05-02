/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikovalen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 13:25:16 by ikovalen          #+#    #+#             */
/*   Updated: 2019/03/11 13:46:45 by ikovalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void	readpiece(char *line, t_info *data)
{
	int i;

	i = 6;
	data->piecerow = ft_atoi(&line[i]);
	while (line[i] >= '0' && line[i] <= '9')
		i++;
	data->piececol = ft_atoi(&line[i + 1]);
	i = 0;
	if (data->piece != NULL)
	{
		Z;
	}
	data->piece = (char **)malloc(data->piecerow * sizeof(char *) + 1);
	i = 0;
	while (i < data->piecerow)
	{
		get_next_line(0, &line);
		if (line[0] == '*' || line[0] == '.')
		{
			data->piece[i] = ft_strdup(line);
			i++;
		}
		free(line);
	}
	data->piece[i] = NULL;
}

void	readmaps(t_info *data)
{
	char	*line;
	int		i;

	i = 0;
	if (data->map != NULL)
	{
		get_next_line(0, &line);
		free(line);
	}
	else
		data->map = (char **)malloc(data->height * sizeof(char *) + 1);
	get_next_line(0, &line);
	free(line);
	while (i < data->height)
	{
		get_next_line(0, &line);
		data->map[i] = ft_strdup(line + 4);
		free(line);
		i++;
	}
	get_next_line(0, &line);
	if (ft_strncmp(line, "Piece", 4) == 0)
		readpiece(line, data);
	data->map[i] = NULL;
	free(line);
}

void	takedata(t_info *data)
{
	int		i;
	char	*line;

	get_next_line(0, &line);
	data->player = ft_atoi(&line[10]);
	free(line);
	while (get_next_line(0, &line) > 0)
	{
		if (ft_strncmp(line, "Plateau", 6) == 0)
			break ;
		free(line);
	}
	i = 8;
	data->height = ft_atoi(&line[i]);
	while (line[i] >= '0' && line[i] <= '9')
		i++;
	data->width = ft_atoi(&line[i + 1]);
	fillplayer(data);
	free(line);
}

void	reset(t_info *data)
{
	data->piececol = 0;
	data->piecerow = 0;
	data->checker = 0;
}

int		main(void)
{
	t_info	data;
	int		i;

	data.map = NULL;
	data.piece = NULL;
	takedata(&data);
	reset(&data);
	while (1)
	{
		readmaps(&data);
		solve(&data);
		ft_printf("%i %i\n", data.coord1, data.coord2);
		i = 0;
		while (data.map[i])
			ft_strdel(&data.map[i++]);
		ft_strdel(data.map);
		i = 0;
		data.coord1 = 0;
		data.coord2 = 0;
	}
	return (0);
}
