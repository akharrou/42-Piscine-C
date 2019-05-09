/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:27:13 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/10 22:29:26 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
	int (*cmpf)(void *, void *))
{
	if (root)
	{
		if ((*cmpf)(root->item, data_ref) == 0)
			return (root->item);
		if (root->left)
			return (btree_search_item(root->left, data_ref, cmpf));
		if (root->right)
			return (btree_search_item(root->right, data_ref, cmpf));
	}
	return (0);
}
