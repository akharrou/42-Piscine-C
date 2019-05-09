/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 18:54:57 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/04 21:11:06 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

extern int g_success;

void	ft_putstr(char *str);
void	ft_print_board(char **board);
void	ft_solve_sudoku(char **board, char **forbid_brd);
void	ft_find_next_digit(char **board, char **forbid_brd, int row, int col);
void	ft_get_subsquare_start(int cur_row, int cur_col,
											int *start_row, int *start_col);
int		ft_reset(char **board, int *row, int *col);
int		ft_is_valid_digit(char **board, char digit, int cur_row, int cur_col);
int		ft_is_valid_sudoku(int ac, char **board);

#endif
