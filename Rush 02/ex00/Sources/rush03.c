/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 16:14:46 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/11 14:54:38 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int g_index_03 = 0;

void	ft_bread_slice_03(int x_length)
{
	int counter;

	g_real_rush_buf[g_index_03++] = 'A';
	if (x_length > 2)
	{
		counter = x_length - 2;
		while (counter > 0)
		{
			g_real_rush_buf[g_index_03++] = 'B';
			counter = counter - 1;
		}
	}
	if (x_length > 1)
		g_real_rush_buf[g_index_03++] = 'C';
	g_real_rush_buf[g_index_03++] = '\n';
}

void	ft_filler_03(int x_length, int y_height)
{
	int counter;

	y_height = y_height - 2;
	while (y_height > 0)
	{
		g_real_rush_buf[g_index_03++] = 'B';
		if (x_length > 1)
		{
			counter = x_length - 2;
			while (counter > 0)
			{
				g_real_rush_buf[g_index_03++] = ' ';
				counter = counter - 1;
			}
			g_real_rush_buf[g_index_03++] = 'B';
			g_real_rush_buf[g_index_03++] = '\n';
		}
		else
			g_real_rush_buf[g_index_03++] = '\n';
		y_height = y_height - 1;
	}
}

char	*ft_rush03(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_bread_slice_03(x);
		if (y > 2)
			ft_filler_03(x, y);
		if (y > 1)
			ft_bread_slice_03(x);
	}
	g_real_rush_buf[g_index_03] = '\0';
	return (g_real_rush_buf);
}
