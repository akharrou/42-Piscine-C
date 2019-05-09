/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 14:59:22 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/01 10:59:49 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define ISPRINT(c) (c >= 32 && c <= 126)

int		ft_ischarset_v2(char c, char *charset, short *index)
{
	while (*charset)
	{
		if (c == *charset++)
			return (1);
		(*index)++;
	}
	return (0);
}

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

char	*ft_itoa_base(long nbr, char *base, int base_, char *buf)
{
	short	i;
	int		quotient;
	long	col;

	i = 0;
	col = 0;
	while (base[col])
		col++;
	if (nbr < 0)
		buf[i++] = '-';
	if (nbr < 0)
		nbr = -nbr;
	while (col <= nbr)
		col *= base_;
	while (col > 1)
	{
		col /= base_;
		(quotient = nbr / col);
		buf[i++] = base[quotient];
		nbr -= (quotient * col);
	}
	buf[i] = '\0';
	return (buf);
}

int		ft_atoi_base(char *str, char *base, short base_len)
{
	short	i;
	short	sign;
	short	index;
	long	val;

	i = 0;
	sign = 1;
	if ((str[i] == '+' || str[i] == '-') &&
		ft_ischarset_v2(str[i + 1], base, &index))
		if (str[i++] == '-')
			sign = -1;
	val = 0;
	index = 0;
	while (str[i] && ft_ischarset_v2(str[i++], base, &index))
	{
		val = (val * base_len) + (index);
		index = 0;
	}
	return (sign * val);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	short	i;
	short	b_from_len;
	short	b_to_len;
	char	*buf;

	b_from_len = 0;
	b_to_len = 0;
	while (base_from[b_from_len])
		b_from_len++;
	while (base_to[b_to_len])
		b_to_len++;
	if (!nbr || !base_from || !base_to || !(buf = malloc(34)) ||
		b_from_len < 1 || b_to_len < 1 ||
		!(ft_validate_base_system(base_from)) ||
		!(ft_validate_base_system(base_to)))
		return (0);
	i = 0;
	while ((nbr[i] >= '\a' && nbr[i] <= '\r') || nbr[i] == ' ')
		i++;
	return
	(ft_itoa_base(
		ft_atoi_base(nbr + i, base_from, b_from_len),
											base_to, b_to_len, buf));
}
