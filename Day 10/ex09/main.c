/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 14:36:29 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/06 23:37:11 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "do_op.h"
#include "ft_opp.h"

int		main(int ac, char *av[])
{
	int i;
	int num_x;
	int num_y;

	if (ac < 4)
		return (0);
	num_x = ft_atoi(av[1]);
	num_y = ft_atoi(av[3]);
	i = -1;
	while (++i < 6)
	{
		if (ft_strcmp(av[2], g_opptab[i].op) == 0)
		{
			if (ft_strcmp(av[2], "/") == 0 && num_y == 0)
				write(1, "Stop : division by zero", 23);
			else if (ft_strcmp(av[2], "%") == 0 && num_y == 0)
				write(1, "Stop : modulo by zero", 21);
			else
				ft_putnbr(g_opptab[i].opft(num_x, num_y));
			write(1, "\n", 1);
			return (0);
		}
	}
	if (i == 6)
		return (ft_usage(0, 0));
}
