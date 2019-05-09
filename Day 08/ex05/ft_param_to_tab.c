/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 13:08:46 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/02 12:50:37 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char					*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	if (!(dest = malloc(i + 1)))
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int				i;
	t_stock_par		*param_tab;

	if (!(param_tab = malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	i = -1;
	while (++i < ac)
	{
		param_tab[i].size_param = ft_strlen(av[i]);
		param_tab[i].str = av[i];
		param_tab[i].copy = ft_strdup(av[i]);
		param_tab[i].tab = ft_split_whitespaces(av[i]);
	}
	param_tab[i].str = 0;
	return (param_tab);
}
