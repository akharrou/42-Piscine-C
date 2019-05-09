/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 12:16:36 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/11 17:11:27 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

void	ft_print_match_msg(char *rush_name, int rush_length, int rush_height,
		int matches_so_far)
{
	if (matches_so_far > 0)
		ft_putstr(" || ");
	ft_putstr("[");
	ft_putstr(rush_name);
	ft_putstr("]");
	ft_putstr(" [");
	ft_putnbr(rush_length);
	ft_putstr("]");
	ft_putstr(" [");
	ft_putnbr(rush_height);
	ft_putstr("]");
}
