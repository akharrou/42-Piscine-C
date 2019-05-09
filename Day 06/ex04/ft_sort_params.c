/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 23:44:27 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/05 22:52:19 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (s1[i] == s2[i])
		return (0);
	return ((s1[i] - s2[i] > 0) ? 1 : -1);
}

void	ft_sort_argv(char **tab, int size)
{
	int		out_of_order;
	int		i;
	char	*temp;

	out_of_order = 1;
	while (size && out_of_order)
	{
		i = 1;
		out_of_order = 0;
		while (i < size - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				out_of_order++;
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		size--;
	}
}

int		main(int ac, char *av[])
{
	int i;

	ft_sort_argv(av, ac);
	i = 0;
	while (++i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
	}
	return (0);
}
