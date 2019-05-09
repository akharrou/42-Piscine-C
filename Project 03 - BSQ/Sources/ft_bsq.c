/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 21:03:06 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/14 21:25:04 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_bsq.h"

void			ft_bsq(t_int8 fd)
{
	t_linked_list	*linked_list;
	t_uint32		**map_grid;
	t_uint8			*map_str;
	t_map			map_info;

	if (ft_get_header(&map_info, fd))
		if ((linked_list = ft_get_first_line(&map_info, fd)))
			if (ft_store_first_line(&map_str, &map_info, fd, linked_list))
				if ((map_grid = ft_allocate_map(&map_info)))
				{
					map_grid = ft_fill_map(&map_info, map_grid, map_str);
					ft_solve(map_grid, &map_info);
					ft_print_map(&map_info, map_str);
					ft_free_map(&map_info, map_grid, map_str);
					return ;
				}
	write(2, "map error\n", 10);
}

void			ft_solve(unsigned int **map, t_map *map_info)
{
	short	x;
	short	y;

	map_info->sq.size = 0;
	y = 0;
	while (++y < map_info->height + 1)
	{
		x = 0;
		while (++x < map_info->height + 1)
		{
			while ((y + map_info->sq.size) <= map_info->height &&
				(x + map_info->sq.size) <=
					map_info->length && ((int)map[y +
						map_info->sq.size][x + map_info->sq.size] -
					(int)map[y + map_info->sq.size][x - 1] -
					(int)map[y - 1][x + map_info->sq.size] +
					(int)map[y - 1][x - 1] <= 0))
			{
				map_info->sq.size++;
				map_info->sq.y = y - 1;
				map_info->sq.x = x - 1;
			}
		}
	}
}
