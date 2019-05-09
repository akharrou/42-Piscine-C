/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:40:46 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/25 22:46:26 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		is_end_state(char *num, char *end_st, int n)
{
	int i;

	i = n;
	while (--i >= 0)
		if (num[i] != end_st[i])
			return (0);
	return (1);
}

void	ft_increment(char (*num)[10], char *registr, int n)
{
	char	max;
	int		i;

	i = n;
	max = '9';
	while (--i >= 0)
	{
		if ((i == n - 1 || registr[i + 1] == '2') && !((*num)[i] == max))
			registr[i] = '1';
		else if ((*num)[i] == max)
			registr[i] = '2';
		max--;
	}
	while (++i < n)
	{
		if (registr[i] == '1')
			(*num)[i]++;
		else if (registr[i] == '2' && i != 0)
			(*num)[i] = (*num)[i - 1] + 1;
		registr[i] = '0';
	}
}

void	ft_print_combn(int n)
{
	int		i;
	char	num[10];
	char	registr[10];
	char	end_state[10];

	if (n < 1 || n > 9)
		return ;
	i = -1;
	while (++i < n)
	{
		num[i] = i + '0';
		end_state[i] = 10 - (n - i) + '0';
		registr[i] = '0';
	}
	num[i] = '\0';
	end_state[i] = '\0';
	registr[i] = '\0';
	while (!is_end_state(num, end_state, n) && (i = -1))
	{
		ft_putstr(num);
		ft_putstr(", ");
		ft_increment(&num, registr, n);
	}
	ft_putstr(num);
}
