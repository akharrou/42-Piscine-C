/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 14:36:26 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/04 22:51:00 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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

// void	ft_putnbr(int nb)
// {
// 	unsigned int nbr;

// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		nbr = -nb;
// 	}
// 	(nbr >= 10) ? ft_putnbr(nbr / 10) : ft_putchar(nbr % 10 + '0');
// }
