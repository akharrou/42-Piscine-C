/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 23:43:16 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/06 22:01:38 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int num;

	if (!begin_list)
		return (0);
	num = nbr;
	while (num-- > 0 && begin_list)
		begin_list = begin_list->next;
	return (begin_list);
}
