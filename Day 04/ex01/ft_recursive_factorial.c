/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 13:52:17 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/27 15:21:15 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb > 12 || nb < -12)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1 && nb == 2)
		return (nb);
	return (nb * ft_recursive_factorial(nb - 1));
}
