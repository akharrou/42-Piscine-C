/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 08:41:05 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/08 21:31:53 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *new_elem;

	if (!(new_elem = malloc(sizeof(t_list))))
		return (NULL);
	new_elem->data = data;
	new_elem->next = NULL;
	return (new_elem);
}
