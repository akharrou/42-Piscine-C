/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:04:43 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/10 22:10:18 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *prev_elem;
	t_list *cur_elem;

	cur_elem = (*begin_list);
	while (cur_elem)
	{
		if ((*cmp)(cur_elem->data, data_ref) == 0)
		{
			if (cur_elem == (*begin_list))
			{
				(*begin_list) = (*begin_list)->next;
				free(cur_elem);
				cur_elem = (*begin_list);
				continue ;
			}
			prev_elem->next = cur_elem->next;
			free(cur_elem);
			cur_elem = prev_elem->next;
			continue ;
		}
		prev_elem = cur_elem;
		cur_elem = cur_elem->next;
	}
}
