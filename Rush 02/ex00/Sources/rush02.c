/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 16:14:46 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/11 14:58:53 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

int g_index_02 = 0;

void	ft_top_bread_slice_02(int x_length)
{
	int counter;

	g_real_rush_buf[g_index_02++] = 'A';
	if (x_length > 2)
	{
		counter = x_length - 2;
		while (counter > 0)
		{
			g_real_rush_buf[g_index_02++] = 'B';
			counter = counter - 1;
		}
	}
	if (x_length > 1)
		g_real_rush_buf[g_index_02++] = 'A';
	g_real_rush_buf[g_index_02++] = '\n';
}

void	ft_filler_02(int x_length, int y_height)
{
	int counter;

	y_height = y_height - 2;
	while (y_height > 0)
	{
		g_real_rush_buf[g_index_02++] = 'B';
		if (x_length > 1)
		{
			counter = x_length - 2;
			while (counter > 0)
			{
				g_real_rush_buf[g_index_02++] = ' ';
				counter = counter - 1;
			}
			g_real_rush_buf[g_index_02++] = 'B';
			g_real_rush_buf[g_index_02++] = '\n';
		}
		else
			g_real_rush_buf[g_index_02++] = '\n';
		y_height = y_height - 1;
	}
}

void	ft_bottom_bread_slice_02(int x_length)
{
	int counter;

	g_real_rush_buf[g_index_02++] = 'C';
	if (x_length > 2)
	{
		counter = x_length - 2;
		while (counter > 0)
		{
			g_real_rush_buf[g_index_02++] = 'B';
			counter = counter - 1;
		}
	}
	if (x_length > 1)
		g_real_rush_buf[g_index_02++] = 'C';
	g_real_rush_buf[g_index_02++] = '\n';
}

char	*ft_rush02(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_top_bread_slice_02(x);
		if (y > 2)
			ft_filler_02(x, y);
		if (y > 1)
			ft_bottom_bread_slice_02(x);
	}
	g_real_rush_buf[g_index_02] = '\0';
	return (g_real_rush_buf);
}
