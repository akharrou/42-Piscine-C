/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:27:05 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/10 22:28:30 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
	int (*cmpf)(void *, void *))
{
	t_btree *probe;

	if (!root || !(*root))
	{
		if (root)
			(*root) = btree_create_node(item);
		return ;
	}
	probe = (*root);
	if ((*cmpf)(item, probe->item) < 0)
	{
		if (probe->left)
			btree_insert_data(&(probe->left), item, cmpf);
		else
			probe->left = btree_create_node(item);
	}
	else
	{
		if (probe->right)
			btree_insert_data(&(probe->right), item, cmpf);
		else
			probe->right = btree_create_node(item);
	}
}
