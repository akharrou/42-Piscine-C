/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 12:30:31 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/25 21:43:22 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_print_comb(void)
{
	char	num[4];

	num[0] = '0';
	num[3] = '\0';
	while (num[0] <= '7')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				ft_putstr(num);
				if (num[0] == '7' && num[1] == '8' && num[2] == '9')
					return ;
				ft_putstr(", ");
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}
