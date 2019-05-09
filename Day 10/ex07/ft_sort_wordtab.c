/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 20:33:14 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/06 21:00:37 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_sort_wordtab(char **tab)
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
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
				ft_swap(&tab[i], &tab[i + 1]);
		end--;
	}
}
