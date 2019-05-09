/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 09:06:33 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/01 19:52:56 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *tab;

	if (min >= max)
	{
		tab = NULL;
		(*range) = tab;
		return (0);
	}
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (0);
	i = 0;
	while (max > min)
		tab[i++] = min++;
	(*range) = tab;
	return (i);
}
