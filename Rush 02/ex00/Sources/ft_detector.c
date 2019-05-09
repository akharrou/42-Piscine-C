/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_detector.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 11:51:29 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/11 17:10:53 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

t_rush g_rush_test[] =
{
	{"rush-00", 'o', &ft_rush00},
	{"rush-01", '/', &ft_rush01},
	{"rush-02", 'A', &ft_rush02},
	{"rush-03", 'A', &ft_rush03},
	{"rush-04", 'A', &ft_rush04},
	{0, 0, 0}
};

void	ft_get_rush_info(char *first_char, int *rush_length, int *rush_height)
{
	int first_line;
	int i;

	if (g_stdin_buf)
	{
		i = 0;
		first_line = 1;
		(*rush_length) = 0;
		(*rush_height) = 0;
		(*first_char) = g_stdin_buf[0];
		while (g_stdin_buf[i])
		{
			if (first_line)
			{
				if (g_stdin_buf[i] == '\n')
					first_line--;
				else
					(*rush_length)++;
			}
			if (g_stdin_buf[i] == '\n')
				(*rush_height)++;
			i++;
		}
	}
}

int		ft_rush_detector_3000(char first_char, int rush_length, int rush_height)
{
	int i;
	int matches;

	i = 0;
	matches = 0;
	while (g_rush_test[i].name != 0)
	{
		if (g_rush_test[i].first_char == first_char)
		{
			if (THEY_MATCH(g_stdin_buf, REAL_RUSH))
			{
				ft_print_match_msg(g_rush_test[i].name,
											rush_length, rush_height, matches);
				matches++;
			}
		}
		i++;
	}
	if (matches > 0)
		return (1);
	return (0);
}
