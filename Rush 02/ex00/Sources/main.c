/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:15:50 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/11 20:00:56 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_rush.h"

char	*g_stdin_buf;
char	*g_real_rush_buf;

int		main(void)
{
	char	first_char;
	int		rush_length;
	int		rush_height;

	g_stdin_buf = ft_import_stdin();
	if (g_stdin_buf == NULL)
		return (1);
	ft_get_rush_info(&first_char, &rush_length, &rush_height);
	g_real_rush_buf = malloc((rush_length + 1) * rush_height + 1);
	if (g_real_rush_buf == NULL)
		return (1);
	if (!ft_rush_detector_3000(first_char, rush_length, rush_height))
		ft_putstr("aucune");
	ft_putstr("\n");
	free(g_stdin_buf);
	free(g_real_rush_buf);
	return (0);
}
