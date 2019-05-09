/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 22:13:27 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/10 22:31:29 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_list	*ft_create_elem(t_btree *node)
{
	t_list *new_elem;

	if (!(new_elem = malloc(sizeof(t_list))))
		return (NULL);
	new_elem->node = node;
	new_elem->next = NULL;
	return (new_elem);
}

void	ft_list_push_back(t_list **begin_list, t_btree *node)
{
	t_list *probe;

	if (begin_list && (*begin_list))
	{
		probe = (*begin_list);
		while (probe->next)
			probe = probe->next;
		probe->next = ft_create_elem(node);
	}
	else
		(*begin_list) = ft_create_elem(node);
}

void	dequeue(t_list **begin_list, int *tree_size, int *level_size)
{
	t_list *temp;

	if (begin_list && (*begin_list))
	{
		temp = (*begin_list);
		if ((*begin_list)->next)
			(*begin_list) = (*begin_list)->next;
		free(temp);
	}
	(*tree_size)--;
	(*level_size)--;
}

int		ft_treat_node(t_list **q_head, t_btree *cur_node)
{
	int nodes_added;

	nodes_added = 0;
	if (cur_node->left)
	{
		ft_list_push_back(q_head, cur_node->left);
		nodes_added++;
	}
	if (cur_node->right)
	{
		ft_list_push_back(q_head, cur_node->right);
		nodes_added++;
	}
	return (nodes_added);
}

void	btree_apply_by_level(t_btree *root,
	void (*applyf)(void *item, int current_level, int is_first_elem))
{
	t_list	*q_head;
	int		level;
	int		first;
	int		tree_size;
	int		level_size;

	if (!root)
		return ;
	tree_size = 1;
	level = -1;
	q_head = 0;
	ft_list_push_back(&q_head, root);
	while (tree_size > 0)
	{
		level++;
		first = 1;
		level_size = tree_size;
		while (level_size > 0 && tree_size > 0)
		{
			tree_size += ft_treat_node(&q_head, q_head->node);
			(*applyf)(q_head->node->item, level, first);
			dequeue(&q_head, &tree_size, &level_size);
			(first == 1) ? first = 0 : 0;
		}
	}
}
