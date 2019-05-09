/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 18:53:56 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/04 21:11:04 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sudoku.h"

#define ISDIGIT(n) (n >= '1' && n <= '9')

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &(*str++), 1);
}

void	ft_print_board(char **board)
{
	int row;
	int col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			write(1, &(board[row][col]), 1);
			if (col != 8)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

int		ft_is_valid_digit(char **board, char digit, int cur_row, int cur_col)
{
	int row;
	int col;
	int start_row;
	int start_col;

	row = -1;
	while (++row < 9)
		if (row != cur_row && board[row][cur_col] == digit)
			return (0);
	col = -1;
	while (++col < 9)
		if (col != cur_col && board[cur_row][col] == digit)
			return (0);
	ft_get_subsquare_start(cur_row, cur_col, &start_row, &start_col);
	row = start_row;
	while (row < start_row + 3)
	{
		col = start_col - 1;
		while (++col < start_col + 3)
			if ((col != cur_col || row != cur_row) && board[row][col] == digit)
				return (0);
		row++;
	}
	return (1);
}

void	ft_get_subsquare_start(int cur_row, int cur_col,
	int *start_row, int *start_col)
{
	(*start_row) = 0;
	if (cur_row >= 3 && cur_row <= 5)
		(*start_row) = 3;
	else if (cur_row >= 6 && cur_row <= 8)
		(*start_row) = 6;
	(*start_col) = 0;
	if (cur_col >= 3 && cur_col <= 5)
		(*start_col) = 3;
	else if (cur_col >= 6 && cur_col <= 8)
		(*start_col) = 6;
}

int		ft_is_valid_sudoku(int ac, char **board)
{
	int row;
	int col;

	if (ac != 10)
		return (0);
	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			if (board[row][col] != '.')
				if (!ISDIGIT(board[row][col]) ||
					!ft_is_valid_digit(board, board[row][col], row, col))
				{
					return (0);
				}
			col++;
		}
		row++;
	}
	return (1);
}
