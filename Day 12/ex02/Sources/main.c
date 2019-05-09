/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:57:42 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/08 18:57:50 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int		main(void)
{
	int fd;

	fd = open("ft_tail", O_CREAT | O_TRUNC | O_WRONLY, 0755);
	write(fd, "/usr/bin/tail $@;", 17);
	close(fd);
	return (0);
}
