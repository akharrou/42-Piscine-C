/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:52:08 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/25 22:44:11 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_cycle_to_99(char *num)
{
	if (num[1] != '9')
	{
		num[4] = num[1] + 1;
		num[3] = num[0];
	}
	else
	{
		num[3] = num[0] + 1;
		num[4] = '0';
	}
	while (num[3] <= '9')
	{
		while (num[4] <= '9')
		{
			ft_putstr(num);
			if (num[0] == '9' && num[1] == '8' &&
				num[3] == '9' && num[4] == '9')
				return ;
			ft_putstr(", ");
			num[4]++;
		}
		num[4] = '0';
		num[3]++;
	}
}

void	ft_print_comb2(void)
{
	char num[6];

	num[0] = '0';
	num[1] = '0';
	num[2] = ' ';
	num[3] = '0';
	num[4] = '0';
	num[5] = '\0';
	while (num[0] <= '9')
	{
		num[1] = '0';
		while (num[1] <= '9')
		{
			ft_cycle_to_99(num);
			if (num[0] == '9' && num[1] == '8')
				return ;
			num[1]++;
		}
		num[0]++;
	}
}
