/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 11:05:18 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/27 15:20:14 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long i;
	long result;

	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0 || nb % 7 == 0)
		return (0);
	i = 11;
	while ((result = i * i) < nb)
	{
		if (nb % i == 0 || result > 2147483647)
			return (0);
		i += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (nb == 2)
		return (nb);
	if (nb % 2 == 0)
		nb++;
	while (!ft_is_prime(nb))
		nb += 2;
	return (nb);
}
