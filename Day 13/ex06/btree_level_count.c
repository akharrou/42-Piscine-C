/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:27:21 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/10 22:30:49 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int left_count;
	int right_count;

	if (!root)
		return (0);
	left_count = 0;
	right_count = 0;
	if (root->left)
		left_count = btree_level_count(root->left);
	if (root->right)
		right_count = btree_level_count(root->right);
	return ((left_count > right_count) ? left_count + 1 : right_count + 1);
}
