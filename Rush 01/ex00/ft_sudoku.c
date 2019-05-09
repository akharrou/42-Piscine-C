/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 13:14:10 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/04 21:02:29 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		ft_reset(char **board, int *row, int *col)
{
	if ((*col) == 9)
	{
		(*row)++;
		(*col) = 0;
		if ((*row) == 9)
		{
			g_success = 1;
			ft_print_board(board);
			return (0);
		}
	}
	return (1);
}

void	ft_find_next_digit(char **board, char **forbid_brd, int row, int col)
{
	char digit;

	if (col == 9)
		if (!ft_reset(board, &row, &col))
			return ;
	if (forbid_brd[row][col] != '.')
		ft_find_next_digit(board, forbid_brd, row, col + 1);
	else
	{
		digit = '1';
		while (digit <= '9')
		{
			if (ft_is_valid_digit(board, digit, row, col))
			{
				board[row][col] = digit;
				ft_find_next_digit(board, forbid_brd, row, col + 1);
				if (g_success == 1)
					return ;
			}
			digit++;
		}
		board[row][col] = '.';
	}
}

void	ft_solve_sudoku(char **board, char **forbid_brd)
{
	int		row;
	int		col;
	char	digit;

	row = 0;
	col = 0;
	digit = '1';
	if (forbid_brd[row][col] != '.')
		ft_find_next_digit(board, forbid_brd, row, col + 1);
	else
	{
		while (digit <= '9')
		{
			if (ft_is_valid_digit(board, digit, row, col))
			{
				board[row][col] = digit;
				ft_find_next_digit(board, forbid_brd, row, col + 1);
				if (g_success == 1)
					return ;
			}
			digit++;
		}
	}
}
