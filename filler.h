/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikovalen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 13:25:31 by ikovalen          #+#    #+#             */
/*   Updated: 2019/01/31 13:26:00 by ikovalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include "ft_printf/ft_printf.h"
# define INI int x; int y; int row; int col; int star
# define DEFI x = -1; star = 0

typedef struct			s_info
{
	int					player;
	int					stars;
	int					width;
	int					height;
	int					coord1;
	int					coord2;
	int					checker;
	char				xo;
	char				xoenemy;
	char				**map;
	int					piececol;
	int					piecerow;
	char				**piece;
}						t_info;

int						module(int x);
void					solve(t_info *data);
int						ismin(int i, int j, t_info *data);

#endif
