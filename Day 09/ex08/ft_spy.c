/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 15:09:27 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/02 16:34:08 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int ac, char *av[])
{
	if (--ac > 0)
		while (ac-- && ++av && *av)
		{
			if (ft_strcmp(*av, "president") == 0)
				write(1, "Alert!!!\n", 9);
			if (ft_strcmp(*av, "attack") == 0)
				write(1, "Alert!!!\n", 9);
			if (ft_strcmp(*av, "Powers") == 0)
				write(1, "Alert!!!\n", 9);
		}
	return (0);
}
