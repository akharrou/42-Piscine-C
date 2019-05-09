/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 21:00:46 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/14 23:44:55 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_bsq.h"

t_bool			ft_get_header(t_map *map_info, t_int8 fd)
{
	t_uint8			buffer[14];
	t_uint8			digits;
	t_uint8			i;
	t_uint32		n;

	i = 0;
	while (read(fd, &(buffer[i]), 1) > 0 && buffer[i] != '\n' && i < 14)
		i++;
	map_info->full = buffer[i - 1];
	map_info->obstacle = buffer[i - 2];
	map_info->empty = buffer[i - 3];
	buffer[i - 3] = '\0';
	map_info->height = ft_atoi(buffer);
	digits = 1;
	n = map_info->height;
	while (n >= 10 && ++digits)
		n /= 10;
	if (map_info->empty == map_info->obstacle ||
		map_info->empty == map_info->full ||
		map_info->obstacle == map_info->full ||
		map_info->height < 1 || digits + 3 != i)
		return (0);
	return (1);
}

t_linked_list	*ft_get_first_line(t_map *map_info, t_int8 fd)
{
	t_linked_list	*first_item;
	t_linked_list	*head;
	t_uint8			holder;
	t_uint32		i;

	read(fd, &holder, 1);
	first_item = malloc(sizeof(t_linked_list));
	first_item->value = holder;
	first_item->next = 0;
	i = 1;
	head = first_item;
	while (read(fd, &holder, 1) > 0)
	{
		if (holder != map_info->obstacle && holder != map_info->empty &&
			holder != '\n')
			return (0);
		head = create_new_elem(&head, holder);
		if (holder == '\n')
			break ;
		i++;
	}
	if ((map_info->length = i) < 1)
		return (0);
	map_info->str_size = (map_info->length + 1) * (map_info->height) + 1;
	return (first_item);
}

t_bool			ft_store_first_line(t_uint8 **map_str, t_map *map_info,
				t_uint8 fd, t_linked_list *linked_list)
{
	t_linked_list	*temp;
	t_uint32		i;

	if (!((*map_str) =
		(t_uint8 *)malloc(sizeof(t_uint8) * (map_info->str_size))))
		return (0);
	i = 0;
	while (linked_list != 0)
	{
		(*map_str)[i] = linked_list->value;
		temp = linked_list;
		linked_list = linked_list->next;
		free(temp);
		i++;
	}
	(*map_str)[i] = '\0';
	return (ft_store_the_rest(fd, map_info, map_str, i));
}

t_bool			ft_store_the_rest(t_int8 fd, t_map *map_info, t_uint8 **map_str,
				t_uint32 i)
{
	t_uint8			buffer[BUFFER_SIZE];
	t_uint16    	ret;
	int				x;
	t_uint32		total_copied;

	total_copied = map_info->length + 1;
	while ((ret = read(fd, buffer, BUFFER_SIZE - 1)) > 0)
	{
		if (total_copied + ret > map_info->str_size)
			return (0);
		total_copied += ret;
		buffer[ret] = '\0';
		if (!(ft_strcpy(buffer, map_str, i, map_info)))
		{
			free(*map_str);
			return (0);
		}
		i += ret;
	}
	x = 0;
	i = map_info->length;
	while (x < map_info->height)
	{
		if ((*map_str)[i] != '\n')
			return (0);
		x++;
		i += map_info->length + 1;
	}
	close(fd);
	return (1);
}
