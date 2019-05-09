/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:36:45 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/10 22:14:56 by akharrou         ###   ########.fr       */
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

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		size;
	int		i;
	void	*temp;
	t_list	*probe;

	if (begin_list && (*begin_list))
	{
		size = ft_list_size(*begin_list);
		while (size)
		{
			i = 0;
			probe = (*begin_list);
			while (++i < size)
			{
				if ((*cmp)(probe->data, probe->next->data) > 0)
				{
					temp = probe->data;
					probe->data = probe->next->data;
					probe->next->data = temp;
				}
				probe = probe->next;
			}
			size--;
		}
	}
}

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
								int (*cmp)())
{
	ft_list_merge(begin_list1, begin_list2);
	ft_list_sort(begin_list1, cmp);
}
