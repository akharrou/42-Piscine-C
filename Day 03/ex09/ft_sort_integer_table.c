/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 19:30:51 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/26 08:57:56 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int temp;
	int out_of_order;

	i = 0;
	out_of_order = 1;
	while (size && out_of_order)
	{
		i = 0;
		out_of_order = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				out_of_order++;
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		size--;
		i = 0;
	}
}
