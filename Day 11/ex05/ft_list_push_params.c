/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:11:01 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/10 22:03:57 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_elem;

	new_elem = ft_create_elem(data);
	new_elem->next = (*begin_list);
	(*begin_list) = new_elem;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *ll_head;

	if (ac-- > 0)
		ll_head = ft_create_elem(*(av++));
	while (ac-- > 0)
		ft_list_push_front(&ll_head, *(av++));
	return (ll_head);
}
