/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 09:57:12 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/06 23:18:24 by akharrou         ###   ########.fr       */
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

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		size;
	int		size_cpy;
	void	*temp;
	t_list	*probe;

	if (begin_list)
	{
		size = ft_list_size(begin_list);
		while (size-- > 1)
		{
			probe = begin_list;
			size_cpy = size;
			while (size_cpy-- > 0)
			{
				temp = probe->data;
				probe->data = probe->next->data;
				probe->next->data = temp;
				probe = probe->next;
			}
		}
	}
}
