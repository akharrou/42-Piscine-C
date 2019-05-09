/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:00:30 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/09 14:55:32 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct	s_btree
{
	void			*item;
	struct s_btree	*left;
	struct s_btree	*right;
}				t_btree;

typedef struct	s_list
{
	struct s_btree	*node;
	struct s_list	*next;
}				t_list;

t_list			*ft_create_elem(t_btree *node);
t_btree			*btree_create_node(void *item);
void			btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void			btree_apply_infix(t_btree *root, void (*applyf)(void *));
void			btree_apply_suffix(t_btree *root, void (*applyf)(void *));
void			btree_insert_data(t_btree **root, void *item,
				int (*cmpf)(void *, void *));
void			*btree_search_item(t_btree *root, void *data_ref,
				int (*cmpf)(void *, void *));
int				btree_level_count(t_btree *root);
void			btree_apply_by_level(t_btree *root,
				void (*applyf)(void *item, int current_level,
				int is_first_elem));
void			ft_list_push_back(t_list **begin_list, t_btree *node);
void			dequeue(t_list **begin_list, int *tree_size, int *level_size);
int				ft_treat_node(t_list **q_head, t_btree *cur_node);

#endif
