/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 08:15:51 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/06 21:00:32 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **s1, char **s2)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int i;
	int end;

	end = 0;
	while (tab[end])
		end++;
	while (end > 1)
	{
		i = -1;
		while (++i < end - 1)
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
				ft_swap(&tab[i], &tab[i + 1]);
		end--;
	}
}
