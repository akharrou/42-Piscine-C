/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 16:14:46 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/30 08:34:28 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

#define TOP_LEFT_CORNER_CHARACTER 'A'
#define TOP_RIGHT_CORNER_CHARACTER 'C'

#define BOTTOM_LEFT_CORNER_CHARACTER 'C'
#define BOTTOM_RIGHT_CORNER_CHARACTER 'A'

#define HORIZONTAL_SIDE_CHARACTER 'B'
#define VERTICAL_SIDE_CHARACTER 'B'

void	ft_top_bread_slice(int x_length)
{
	int counter;

	ft_putchar(TOP_LEFT_CORNER_CHARACTER);
	if (x_length > 2)
	{
		counter = x_length - 2;
		while (counter > 0)
		{
			ft_putchar(HORIZONTAL_SIDE_CHARACTER);
			counter = counter - 1;
		}
	}
	if (x_length > 1)
		ft_putchar(TOP_RIGHT_CORNER_CHARACTER);
	ft_putchar('\n');
}

void	ft_filler(int x_length, int y_height)
{
	int counter;

	y_height = y_height - 2;
	while (y_height > 0)
	{
		ft_putchar(VERTICAL_SIDE_CHARACTER);
		if (x_length > 1)
		{
			counter = x_length - 2;
			while (counter > 0)
			{
				ft_putchar(' ');
				counter = counter - 1;
			}
			ft_putchar(VERTICAL_SIDE_CHARACTER);
			ft_putchar('\n');
		}
		else
			ft_putchar('\n');
		y_height = y_height - 1;
	}
}

void	ft_bottom_bread_slice(int x_length)
{
	int counter;

	ft_putchar(BOTTOM_LEFT_CORNER_CHARACTER);
	if (x_length > 2)
	{
		counter = x_length - 2;
		while (counter > 0)
		{
			ft_putchar(HORIZONTAL_SIDE_CHARACTER);
			counter = counter - 1;
		}
	}
	if (x_length > 1)
		ft_putchar(BOTTOM_RIGHT_CORNER_CHARACTER);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_top_bread_slice(x);
		if (y > 2)
			ft_filler(x, y);
		if (y > 1)
			ft_bottom_bread_slice(x);
	}
}
