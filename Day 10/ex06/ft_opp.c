/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 14:55:52 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/04 16:30:23 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sub(int a, int b)
{
	return (a - b);
}

int		ft_add(int a, int b)
{
	return (a + b);
}

int		ft_mul(int a, int b)
{
	return (a * b);
}

int		ft_div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

int		ft_mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
