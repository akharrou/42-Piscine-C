/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 16:45:13 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/02 16:55:12 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_door.h"

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &(str[i++]), 1);
}

ft_bool		close_door(t_door *door)
{
	ft_putstr("Door closing...\n");
	door->state = CLOSE;
	return (TRUE);
}

ft_bool		open_door(t_door *door)
{
	ft_putstr("Door opening...\n");
	door->state = OPEN;
	return (TRUE);
}

ft_bool		is_door_open(t_door *door)
{
	ft_putstr("Door is open ?\n");
	return (door->state = OPEN);
}

ft_bool		is_door_close(t_door *door)
{
	ft_putstr("Door is close ?\n");
	return (door->state = CLOSE);
}
