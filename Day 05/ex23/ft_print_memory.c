/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 12:51:34 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/30 23:37:02 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ISPRINT(c) (c >= 32 && c <= 126)

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

char	*ft_itoa_base(int nbr, int base, char *buf, int size)
{
	int		i;
	int		res;

	i = 0;
	while (i < size - 1)
		buf[i++] = '0';
	buf[i] = '\0';
	while (nbr > 0)
	{
		res = nbr % base;
		buf[--i] = (res) + ((res < 10) ? '0' : 'W');
		nbr /= base;
	}
	return (buf);
}

void	ft_print_second_section(char *buffer, int index, int *count_addr,
	unsigned int size)
{
	int		count_2;
	int		count_8;
	char	num_buf[3];

	count_8 = 8;
	while (count_8-- > 0 && index < ((int)size))
	{
		count_2 = 2;
		while (count_2-- > 0 && index < ((int)size))
		{
			ft_putstr(ft_itoa_base(buffer[index++], 16, num_buf, 3));
			(*count_addr)++;
		}
		while (count_2-- > -1)
			ft_putstr("  ");
		ft_putchar(' ');
	}
	while (count_8-- > -1)
		ft_putstr("     ");
	ft_putchar(' ');
}

void	ft_print_third_section(char *buffer, int *index, unsigned int size)
{
	int	count_16;

	count_16 = 16;
	while ((*index) < ((int)size) && count_16-- > 0)
	{
		if (!ISPRINT(buffer[(*index)]))
			ft_putchar('.');
		else
			ft_putchar(buffer[(*index)]);
		(*index)++;
	}
	ft_putchar('\n');
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	int		count_addr;
	char	address_buf[9];

	if (!size)
		return (addr);
	i = 0;
	count_addr = 0;
	while (i < ((int)size) && ((char *)addr)[i])
	{
		ft_putstr(ft_itoa_base(count_addr, 16, address_buf, 9));
		ft_putstr(": ");
		ft_print_second_section((char *)addr, i, &count_addr, size);
		ft_print_third_section((char *)addr, &i, size);
	}
	return (((char *)addr));
}
