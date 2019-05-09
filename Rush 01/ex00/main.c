/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 11:04:41 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/04 21:11:05 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sudoku.h"

int g_success = 0;

int		main(int ac, char *av[])
{
	if (ft_is_valid_sudoku(ac, ++av) != 0)
	{
		ft_solve_sudoku(av, av);
		if (g_success == 0)
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
	return (0);
}
