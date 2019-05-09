/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 23:39:44 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/07 23:50:49 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		main(int ac, char *av[])
{
	int filedes;

	(void)ac;
	(void)av;
	filedes = open("ft_hexdump", O_CREAT | O_TRUNC | O_WRONLY, 0755);
	write(filedes, "/usr/bin/hexdump $@;", 20);
	close(filedes);
	return (0);
}
