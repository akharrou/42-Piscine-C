/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 21:40:13 by zstucke           #+#    #+#             */
/*   Updated: 2018/11/14 21:12:04 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#include "ft_bsq.h"

int				main(int ac, char **av)
{
	t_int8	fd;

	if (ac == 1)
		ft_bsq(0);
	while (--ac > 0)
	{
		if ((fd = open(*(++av), O_RDONLY)) > 2)
			ft_bsq(fd);
		if (ac > 1)
			write(1, "\n", 1);
	}
	return (0);
}
