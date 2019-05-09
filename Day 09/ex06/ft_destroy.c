/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 13:22:16 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/02 15:02:53 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_destroy(char ***factory)
{
	int x;
	int y;

	x = 0;
	while (factory[x])
	{
		y = 0;
		while (factory[x][y])
			free(factory[x][y++]);
		free(factory[x++]);
	}
	free(factory);
}
