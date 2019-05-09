/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 14:10:57 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/29 19:52:23 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	long	product;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	product = nb;
	while (--power > 0)
	{
		product *= nb;
		if (product > 2147483647 || product < -2147483648)
			return (-1);
	}
	return (product);
}
