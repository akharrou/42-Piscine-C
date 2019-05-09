/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 09:22:15 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/31 11:56:17 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strtablen(int argc, char **argv)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	size = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j++])
			size++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*big_str;
	int		size;
	int		i;
	int		j;

	size = ft_strtablen(argc, argv);
	if (!(big_str = malloc(size + (argc - 1))))
		return (big_str = 0);
	i = 0;
	size = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
			big_str[size++] = argv[i][j++];
		if (i < argc - 1)
			big_str[size++] = '\n';
	}
	big_str[size--] = '\0';
	return (big_str);
}
