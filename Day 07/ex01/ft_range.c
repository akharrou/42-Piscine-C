/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 08:32:58 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/01 10:02:51 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
		return (tab = NULL);
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (tab = NULL);
	i = 0;
	while (max > min)
		tab[i++] = min++;
	return (tab);
}
