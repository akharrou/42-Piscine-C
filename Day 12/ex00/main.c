/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 09:41:46 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/08 19:03:07 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &(*str++), 1);
}

void	ft_display_file(int filedes)
{
	char	buf[1];

	while (read(filedes, &(*buf), 1) > 0)
		write(1, &(*buf), 1);
}

int		main(int ac, char *av[])
{
	int filedes;

	if (ac < 2)
		ft_putstr("File name missing.\n");
	else if (ac > 2)
		ft_putstr("Too many arguments.\n");
	else if ((filedes = open(av[1], O_RDWR)) != -1)
	{
		ft_display_file(filedes);
		close(filedes);
	}
	return (0);
}
