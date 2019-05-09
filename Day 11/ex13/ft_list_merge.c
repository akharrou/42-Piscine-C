/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 13:21:09 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/10 22:10:15 by akharrou         ###   ########.fr       */
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

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *last;

	if (!begin_list1 || !(*begin_list1))
		(*begin_list1) = begin_list2;
	else
	{
		last = ft_list_last(*begin_list1);
		last->next = begin_list2;
	}
}
