/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 23:53:12 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/09 14:42:10 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		main(int ac, char *av[])
{
	int		filedescriptor_1;
	int		filedescriptor_2;
	int		bytes_read;
	char	buf[1024 + 1];

	(void)ac;
	(void)av;
	filedescriptor_1 = open("/usr/bin/last", O_RDONLY, 0755);
	filedescriptor_2 = open("ft_last", O_TRUNC | O_WRONLY, 0755);
	while ((bytes_read = read(filedescriptor_1, buf, 1024)))
		write(filedescriptor_2, buf, bytes_read);
	close(filedescriptor_1);
	close(filedescriptor_2);
	return (0);
}
