/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 08:30:01 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/06 23:15:47 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*probe;

	if (begin_list)
	{
		probe = begin_list;
		while (probe->next)
			probe = probe->next;
		return (probe);
	}
	return (0);
}

int		ft_list_size(t_list *begin_list)
{
	t_list	*probe;
	int		size;

	size = 0;
	probe = begin_list;
	while (probe)
	{
		size++;
		probe = probe->next;
	}
	return (size);
}

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*last;
	t_list	*after_last;
	int		size;

	if (begin_list && (*begin_list))
	{
		size = ft_list_size(*begin_list);
		last = ft_list_last(*begin_list);
		while (size-- > 1)
		{
			after_last = (*begin_list);
			(*begin_list) = (*begin_list)->next;
			after_last->next = last->next;
			last->next = after_last;
		}
		begin_list = &last;
	}
}
