/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 13:48:47 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/06 22:45:51 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *probe;

	if (begin_list && (*begin_list))
	{
		probe = (*begin_list);
		while (probe->next)
			probe = probe->next;
		probe->next = ft_create_elem(data);
	}
	else
		(*begin_list) = ft_create_elem(data);
}
