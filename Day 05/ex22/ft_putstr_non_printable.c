/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 22:21:57 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/30 22:27:31 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ISPRINT(c) (c >= 32 && c <= 126)

int		ft_putchar(char c);

void	ft_putnbr_base(long nbr, char *base)
{
	int		quotient;
	long	col;
	short	i;
	short	base_sys;

	i = 0;
	col = 0;
	while (base[i++])
		col++;
	base_sys = col;
	if (nbr < 0)
		ft_putchar('-');
	if (nbr < 0)
		nbr = -nbr;
	while (col <= nbr)
		col *= base_sys;
	while (col > 1)
	{
		col /= base_sys;
		quotient = (nbr / col);
		ft_putchar(base[quotient]);
		nbr -= (quotient * col);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (!ISPRINT(*str))
		{
			ft_putchar('\\');
			if (*str <= '\xf')
				ft_putchar('0');
			ft_putnbr_base(*str++, "0123456789abcdef");
		}
		else
			ft_putchar(*str++);
	}
}
