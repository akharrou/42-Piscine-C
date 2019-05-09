/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 16:14:46 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/30 08:33:50 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

#define LEFT_CORNER_CHARACTER 'o'
#define RIGHT_CORNER_CHARACTER 'o'

#define HORIZONTAL_SIDE_CHARACTER '-'
#define VERTICAL_SIDE_CHARACTER '|'

void	ft_bread_slice(int x_length)
{
	int counter;

	ft_putchar(LEFT_CORNER_CHARACTER);
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
		ft_putchar(RIGHT_CORNER_CHARACTER);
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

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_bread_slice(x);
		if (y > 2)
			ft_filler(x, y);
		if (y > 1)
			ft_bread_slice(x);
	}
}
