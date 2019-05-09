/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 23:00:54 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/14 22:39:30 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_bsq.h"

t_linked_list	*create_new_elem(t_linked_list **head, char new_char)
{
	t_linked_list *new;

	new = malloc(sizeof(t_linked_list));
	new->next = 0;
	new->value = new_char;
	(*head)->next = new;
	return (new);
}

t_bool			ft_strcpy(t_uint8 *old, t_uint8 **new, t_uint32 starting_index,
				t_map *map_info)
{
	while (*old != '\0')
	{
		(*new)[starting_index] = *old;
		if (*old != map_info->obstacle && *old != map_info->empty &&
			*old != '\n')
			return (0);
		old++;
		starting_index++;
	}
	(*new)[starting_index] = '\0';
	return (1);
}

t_uint32		ft_atoi(t_uint8 *str)
{
	int		x;
	int		number;
	int		sign;

	x = 0;
	number = 0;
	sign = 1;
	while (str[x] == ' ' || str[x] == '\t' || str[x] == '\n' ||
			str[x] == '\v' || str[x] == '\f' || str[x] == '\r')
		x++;
	if (str[x] == '+')
		x++;
	else if (str[x] == '-')
	{
		sign = -1;
		x++;
	}
	while (str[x] != '\0' && str[x] >= '0' && str[x] <= '9')
	{
		number = (number * 10) + str[x] - 48;
		x++;
	}
	return (number * sign);
}
