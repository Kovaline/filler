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
	unsigned int		width;
	unsigned int		height;
	char 				xo;
	char 				xoenemy;
}						t_info;

#endif
