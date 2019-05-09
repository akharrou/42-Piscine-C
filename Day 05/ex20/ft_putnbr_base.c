/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 19:36:25 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/31 17:38:57 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

#define ISPRINT(c) (c >= 32 && c <= 126)

int		ft_validate_base_system(char *base_str)
{
	short	i;
	short	j;
	short	count;

	if (!base_str || !base_str[0] || !base_str[1])
		return (0);
	i = -1;
	while (base_str[++i])
	{
		count = 0;
		if (!ISPRINT(base_str[i]))
			return (0);
		if (base_str[i] == '+' || base_str[i] == '-')
			return (0);
		j = -1;
		while (base_str[++j])
			if (base_str[i] == base_str[j])
				count++;
		if (count > 1)
			return (0);
	}
	return (1);
}

void	ft_putnbr_base_util(long nbr, char *base)
{
	int		quotient;
	long	col;
	short	i;
	short	base_sys;

	if (!ft_validate_base_system(base))
		return ;
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

void	ft_putnbr_base(int nbr, char *base)
{
	ft_putnbr_base_util((long)nbr, base);
	return ;
}
