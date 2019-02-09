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
# include "libft/libft.h"

typedef struct			s_info
{
	unsigned int		player;
	unsigned int		stars;
	unsigned int		width;
	unsigned int		height;
	unsigned int		coord1;
	unsigned int		coord2;
	unsigned int		checker;
	char 				xo;
	char 				xoenemy;
	char 				**map;
	unsigned int		piececol;
	unsigned int		piecerow;
	char				**piece;
	unsigned int		posenx;
	unsigned int		poseny;
	unsigned int		posmex;
	unsigned int		posmey;
	unsigned int		topbot;
}						t_info;

int 	module(int x);
void	solve(t_info *data);
void	checkpos(t_info *data);
int		ismin(int i, int j, t_info *data);

#endif
