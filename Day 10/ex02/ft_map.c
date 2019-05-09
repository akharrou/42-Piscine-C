/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 09:58:49 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/06 19:53:02 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *tab_dup;
	int i;

	if (!(tab_dup = malloc(sizeof(int) * length)))
		return (tab_dup = NULL);
	i = -1;
	while (++i < length)
		tab_dup[i] = (*f)(tab[i]);
	return (tab_dup);
}
