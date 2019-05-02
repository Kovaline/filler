/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   viz.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikovalen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 13:41:37 by ikovalen          #+#    #+#             */
/*   Updated: 2019/03/08 12:06:22 by ikovalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIZ_H
# define VIZ_H
# include "minilibx_macos/mlx.h"
# define SOS mlx->stop = 1; drawwinner(line, mlx); break
# define HELP free(line); get_next_line(0, &line); free(line)

typedef struct		s_pr
{
	void			*mlx_ptr;
	void			*win_ptr;
	void			*img_ptr;
	int				*imgdata;
	int				mapheight;
	int				mapwidth;
	char			**field;
	int				colord;
	int				colorx;
	int				coloro;
	int				x;
	int				y;
	int				size;
	int				stop;
}					t_pr;

void				img(t_pr *mlx);
void				setsize(t_pr *mlx);
int					hookthekey(int keycode, t_pr *mlx);
void				drawwinner(char *line, t_pr *mlx);
void				createlegend(t_pr *mlx);
void				drawsquare(t_pr *mlx, int size, int color);
#endif
