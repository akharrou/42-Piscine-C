/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 20:53:20 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/10 22:04:03 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *temp;

	if (!begin_list || !(*begin_list))
		return ;
	while (*begin_list)
	{
		temp = (*begin_list);
		(*begin_list) = (*begin_list)->next;
		free(temp);
	}
	(*begin_list) = NULL;
}
