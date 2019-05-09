/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 21:08:24 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/14 22:21:43 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_bsq.h"

/*
** Adding an extra row and column to make the numbering process the same
** for the whole map.
** Without using loads of useless if statements to account for the first row
** and column.
*/

t_uint32		**ft_allocate_map(t_map *map_info)
{
	t_uint32	**arr;
	t_int16		x;
	t_int16		y;

	if (!(arr =
		(t_uint32 **)malloc(sizeof(t_uint32 *) * (map_info->height + 1))))
		return (0);
	y = -1;
	while (++y < map_info->height + 1)
		if (!(arr[y] =
			(t_uint32 *)malloc(sizeof(t_uint32) * (map_info->length + 1))))
			return (0);
	y = 0;
	x = -1;
	while (++x < map_info->length + 1)
		arr[y][x] = 0;
	x = 0;
	while (y < map_info->height + 1)
	{
		arr[y][x] = 0;
		y++;
	}
	return (arr);
}

t_uint32		**ft_fill_map(t_map *map_info, t_uint32 **map_grid,
				t_uint8 *map_str)
{
	t_int16		x;
	t_int16		y;

	x = 1;
	y = 1;
	while (*map_str != '\0')
	{
		if (*map_str == '\n')
		{
			y++;
			x = 1;
		}
		else
		{
			map_grid[y][x] = map_grid[y][x - 1] +
							map_grid[y - 1][x] -
							map_grid[y - 1][x - 1];
			if (*map_str == map_info->obstacle)
				map_grid[y][x]++;
			x++;
		}
		map_str++;
	}
	return (map_grid);
}

void			ft_print_map(t_map *map_info, t_uint8 *map_str)
{
	t_uint32	digits;
	t_uint32	ticker;
	t_uint32	x;

	digits = map_info->sq.y * (map_info->length + 1) + map_info->sq.x;
	x = 0;
	while (x < map_info->sq.size)
	{
		ticker = 0;
		while (ticker < map_info->sq.size)
		{
			map_str[digits + ticker] = map_info->full;
			ticker++;
		}
		digits += map_info->length + 1;
		x++;
	}
	write(1, map_str, map_info->str_size - 1);
}

void			ft_free_map(t_map *map_info, t_uint32 **map_grid,
				t_uint8 *map_str)
{
	t_uint16 i;

	i = 0;
	while (i < map_info->height + 1)
	{
		free(map_grid[i]);
		i++;
	}
	free(map_grid);
	free(map_str);
}
