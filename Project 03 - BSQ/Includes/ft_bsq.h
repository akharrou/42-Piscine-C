/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 08:59:53 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/14 21:20:06 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BSQ_H
# define FT_BSQ_H

# define BUFFER_SIZE 128

typedef unsigned char	t_bool;
typedef unsigned char	t_uint8;
typedef unsigned short	t_uint16;
typedef unsigned int	t_uint32;

typedef signed char		t_int8;
typedef signed short	t_int16;
typedef signed int		t_int32;

typedef struct			s_best_square
{
	t_uint16	x;
	t_uint16	y;
	t_uint16	size;
}						t_best_square;

typedef struct			s_map_info
{
	t_uint16		length;
	t_uint16		height;
	t_uint8			empty;
	t_uint8			obstacle;
	t_uint8			full;
	t_uint32		str_size;
	t_best_square	sq;
}						t_map;

typedef struct			s_linked_list
{
	struct s_linked_list	*next;
	char					value;
}						t_linked_list;

t_linked_list			*ft_get_first_line(t_map *map_info, t_int8 fd);

t_linked_list			*create_new_elem(t_linked_list **head, char new_char);

t_bool					ft_get_header(t_map *map_info, t_int8 fd);

t_bool					ft_strcpy(t_uint8 *old, t_uint8 **new,
						t_uint32 starting_index, t_map *map_info);

t_bool					ft_store_the_rest(t_int8 fd, t_map *map_info,
						t_uint8 **map_str, t_uint32 i);

t_bool					ft_store_first_line(t_uint8 **map_str, t_map *map_info,
						t_uint8 fd, t_linked_list *linked_list);

t_uint32				**ft_allocate_map(t_map *map_info);

t_uint32				**ft_fill_map(t_map *map_info, t_uint32 **map_grid,
						t_uint8 *map_str);

t_uint32				ft_atoi(t_uint8 *str);

void					ft_solve(unsigned int **map, t_map *map_info);

void					ft_print_map(t_map *map_info, t_uint8 *map_str);

void					ft_bsq(t_int8 fd);

void					ft_free_map(t_map *map_info, t_uint32 **map_grid,
						t_uint8 *map_str);

#endif
