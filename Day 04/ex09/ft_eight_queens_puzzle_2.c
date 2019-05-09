/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 08:51:45 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/27 14:34:50 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_solution(int hist_log[8])
{
	int i;

	i = 0;
	while (i < 8)
		ft_putchar(hist_log[i++] + 1 + '0');
	ft_putchar('\n');
}

int		ft_is_valid_position(int cur_col, int cur_row, int hist_log[8])
{
	int i;

	i = -1;
	while (++i < cur_row)
	{
		if (cur_col == hist_log[i] ||
			cur_col == hist_log[i] + (cur_row - i) ||
			cur_col == hist_log[i] + (i - cur_row))
		{
			return (0);
		}
	}
	return (1);
}

void	ft_find_next_position(int hist_log[8], int row_i,
	int *solution_count)
{
	int col_i;

	col_i = -1;
	while (++col_i < 8)
	{
		if (row_i == 8)
		{
			ft_print_solution(hist_log);
			break ;
		}
		if (ft_is_valid_position(col_i, row_i, hist_log))
		{
			hist_log[row_i] = col_i;
			ft_find_next_position(hist_log, row_i + 1, solution_count);
		}
	}
	hist_log[row_i - 1] = -1;
}

void	ft_eight_queens_puzzle_2(void)
{
	int solution_count;
	int hist_log[8];
	int row_i;
	int col_i;

	col_i = -1;
	while (++col_i < 8)
		hist_log[col_i] = -1;
	row_i = 0;
	col_i = 0;
	solution_count = 0;
	while (col_i < 8)
	{
		hist_log[row_i] = col_i;
		ft_find_next_position(hist_log, row_i + 1, &solution_count);
		col_i++;
	}
	return ;
}
