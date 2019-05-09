/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 15:05:06 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/02 15:07:57 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base != 1)
	{
		if ((base % 2) == 1)
			return (1 + ft_collatz_conjecture(3 * base + 1));
		else
			return (1 + ft_collatz_conjecture(base / 2));
	}
	return (0);
}
