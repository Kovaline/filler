/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikovalen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 21:04:00 by ikovalen          #+#    #+#             */
/*   Updated: 2018/07/14 13:37:18 by ikovalen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int a;
	int i;

	a = 1;
	i = 1;
	while (i < nb)
	{
		a++;
		i = a * a;
	}
	if (i == nb)
		return (a);
	else
		return (0);
}
