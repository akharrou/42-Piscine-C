/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:25:54 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/08 21:44:09 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *new_node;

	if (!(new_node = malloc(sizeof(t_btree))))
		return (0);
	new_node->item = item;
	new_node->left = 0;
	new_node->right = 0;
	return (new_node);
}
