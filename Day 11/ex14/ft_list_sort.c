/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:23:30 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/10 22:11:38 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

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
