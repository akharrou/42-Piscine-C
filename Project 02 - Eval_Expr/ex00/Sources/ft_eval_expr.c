/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_expr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 15:52:02 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/12 13:19:20 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"

char	*g_ptr;

int		ft_parse_number(void)
{
	int result;

	result = 0;
	if (*g_ptr == '(')
	{
		g_ptr++;
		return (ft_parse_sum());
	}
	while (*g_ptr >= '0' && *g_ptr <= '9')
		result = (result * 10) + (*g_ptr++ - '0');
	return (result);
}

int		ft_parse_product(void)
{
	int factor_1;

	factor_1 = ft_parse_number();
	while (*g_ptr == '*' || *g_ptr == '/' || *g_ptr == '%')
	{
		if (*g_ptr == '*')
		{
			g_ptr++;
			factor_1 = factor_1 * ft_parse_number();
		}
		if (*g_ptr == '/')
		{
			g_ptr++;
			factor_1 = factor_1 / ft_parse_number();
		}
		if (*g_ptr == '%')
		{
			g_ptr++;
			factor_1 = factor_1 % ft_parse_number();
		}
	}
	return (factor_1);
}

int		ft_parse_sum(void)
{
	int num_1;

	num_1 = ft_parse_product();
	while (*g_ptr == '+' || *g_ptr == '-')
	{
		if (*g_ptr == '+')
		{
			g_ptr++;
			num_1 = num_1 + ft_parse_product();
		}
		else if (*g_ptr == '-')
		{
			g_ptr++;
			num_1 = num_1 - ft_parse_product();
		}
	}
	if (*g_ptr == ')')
		g_ptr++;
	return (num_1);
}

char	*ft_remove_blank(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (ISBLANK(str[i]))
			i++;
		while (!ISBLANK(str[i]))
			str[j++] = str[i++];
	}
	str[j] = '\0';
	return (str);
}

int		eval_expr(char *str)
{
	g_ptr = ft_remove_blank(str);
	return (ft_parse_sum());
}
