/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 22:02:28 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/01 10:57:53 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ISPRINT(c) (c >= 32 && c <= 126)

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int		ft_is_charset(char c, char *charset, short *index)
{
	int not_part;

	not_part = 1;
	while (not_part && *charset)
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

int		ft_atoi_base_util(char *str, char *base, short base_len)
{
	short	i;
	short	sign;
	short	index;
	long	val;

	i = 0;
	sign = 1;
	if ((str[i] == '+' || str[i] == '-') &&
		ft_is_charset(str[i + 1], base, &index))
		if (str[i++] == '-')
			sign = -1;
	val = 0;
	index = 0;
	while (str[i] && ft_is_charset(str[i++], base, &index))
	{
		val = (val * base_len) + (index);
		index = 0;
	}
	return (sign * val);
}

int		ft_atoi_base(char *str, char *base)
{
	short	base_len;
	short	i;

	if (!str || !str[0])
		return (0);
	i = 0;
	if (!(ft_validate_base_system(base)) || (base_len = ft_strlen(base)) < 1)
		return (0);
	while ((str[i] >= '\a' && str[i] <= '\r') || str[i] == ' ')
		i++;
	return (ft_atoi_base_util(str + i, base, base_len));
}
