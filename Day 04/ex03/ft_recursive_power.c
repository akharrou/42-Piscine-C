/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 15:46:53 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/27 19:15:56 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long		ft_recursive_power_helper(long long nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power_helper(nb, power - 1));
}

int				ft_recursive_power(int nb, int power)
{
	long long result;

	if (power > 63)
		return (-1);
	result = ft_recursive_power_helper(nb, power);
	if (result > 2147483647 || result < -2147483648)
		return (-1);
	return (result);
}
