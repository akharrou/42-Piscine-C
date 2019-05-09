/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 08:55:22 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/31 23:38:51 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(int ac, char *av[])
{
	int i;

	i = 1;
	while (--ac > 0)
	{
		ft_putstr(av[i++]);
		ft_putstr("\n");
	}
	return (0);
}
