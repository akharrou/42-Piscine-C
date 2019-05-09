/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 11:06:57 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/29 08:45:05 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int product;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	product = nb;
	i = nb - 1;
	while (--nb)
		product *= i--;
	return (product);
}
