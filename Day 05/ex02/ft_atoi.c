/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 15:10:53 by jquince           #+#    #+#             */
/*   Updated: 2018/10/31 22:08:59 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int sign;
	int result;
	int i;

	sign = 1;
	result = 0;
	i = 0;
	while ((str[i] >= '\a' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if ((str[i] == '+' || str[i] == '-') &&
		(str[i + 1] >= '0' && str[i + 1] <= '9'))
		if (str[i++] == '-')
			sign = -1;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
		result = (result * 10) + (str[i++] - '0');
	return (sign * result);
}
