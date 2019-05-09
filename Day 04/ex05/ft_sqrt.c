/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 23:45:33 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/29 08:47:05 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int sqrt;
	int result;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	sqrt = 2;
	result = 0;
	while ((result = sqrt * sqrt) <= nb)
	{
		if (result == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}
