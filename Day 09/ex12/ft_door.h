/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 16:45:13 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/02 17:03:44 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# define OPEN 1
# define CLOSE 0
# define EXIT_SUCCES 0
# define TRUE 1

typedef	struct	s_door
{
	int state;
}				t_door;

typedef	int		ft_bool;

void			ft_putstr(char *str);
ft_bool			close_door(t_door *door);
ft_bool			open_door(t_door *door);
ft_bool			is_door_open(t_door *door);
ft_bool			is_door_close(t_door *door);

#endif
