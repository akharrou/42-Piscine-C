/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 21:39:18 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/28 23:40:22 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

#define MID_COL_MINUS_OFFSET (g_col_i >= g_mid_col - g_offset)
#define MID_COL_PLUS_OFFSET (g_col_i <= g_mid_col + g_offset)

#define REACHED_DOOR_COLS (MID_COL_MINUS_OFFSET && MID_COL_PLUS_OFFSET)
#define REACHED_DOOR_ROWS (g_row_i >= g_lst_row - (g_dr_dims - 1))

#define REACHED_DOOR (REACHED_DOOR_ROWS && REACHED_DOOR_COLS)

int g_size = 1;
int g_lst_row = 3;
int g_sastantua_tt_rows = 3;

int g_stars = 1;
int g_spaces = 2;

int g_rows_to_print = 3;
int g_sections_per_tier = 2;

int g_dr_dims = 1;

int g_mid_col;
int g_offset = 0;

int g_col_i = 0;
int g_row_i = 0;

void	ft_get_sastantua_info(int size)
{
	int		counter;
	int		size_incrementor;
	int		space_incrementor;

	counter = 2;
	size_incrementor = 4;
	space_incrementor = 6;
	while (--size > 0)
	{
		g_spaces += space_incrementor;
		space_incrementor += ((counter++ % 2 == 0) ? 1 : 2);
		g_sastantua_tt_rows += size_incrementor++;
	}
	g_mid_col = g_spaces + 2;
	g_lst_row = g_sastantua_tt_rows;
}

void	ft_print_section(int rows_to_print)
{
	int spaces_cpy;
	int stars_cpy;

	while (rows_to_print-- > 0 && (g_row_i++ >= 0))
	{
		spaces_cpy = g_spaces;
		stars_cpy = g_stars;
		while (spaces_cpy-- > 0 && (g_col_i++ >= 0))
			ft_putchar(' ');
		g_col_i++;
		ft_putchar('/');
		while (stars_cpy-- > 0 && (g_col_i++ >= 0))
			((REACHED_DOOR) ? ft_putchar('|') : ft_putchar('*'));
		ft_putchar('\\');
		ft_putchar('\n');
		g_stars += 2;
		g_spaces--;
		g_col_i = 0;
	}
	g_stars -= 2;
	g_spaces--;
}

void	sastantua(int size)
{
	int stars_incrementor;
	int spaces_decrementor;
	int sections_to_print;

	if (!size)
		return ;
	g_size = size;
	ft_get_sastantua_info(size);
	stars_incrementor = 6;
	spaces_decrementor = 1;
	while (g_sastantua_tt_rows > 0)
	{
		sections_to_print = 2;
		while (g_sastantua_tt_rows > 0 && sections_to_print-- > 0)
		{
			ft_print_section(g_rows_to_print++);
			g_stars += stars_incrementor;
			g_spaces -= spaces_decrementor;
			g_sastantua_tt_rows -= g_rows_to_print;
		}
		if ((g_dr_dims += 2) > 0 && (g_offset += (g_dr_dims) / 2) > 0)
			stars_incrementor += 2;
		spaces_decrementor++;
	}
}
