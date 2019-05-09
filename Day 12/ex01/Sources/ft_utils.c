/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:47:48 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/10 22:21:23 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

#include "../Includes/errors.h"
#include "../Includes/ft_cat.h"

#define CMDNAME "cat"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &(*str++), 1);
}

void	ft_error_msg(int error_number, char *cmd_name, char *file_name)
{
	int i;

	ft_putstr(cmd_name);
	ft_putstr(": ");
	ft_putstr(file_name);
	ft_putstr(": ");
	i = -1;
	while (g_error_msg_map[++i].error_msg != 0)
	{
		if (error_number == g_error_msg_map[i].error_no)
		{
			ft_putstr(g_error_msg_map[i].error_msg);
			return ;
		}
	}
}

void	ft_infinite_read_loop(void)
{
	char	buf[1];

	while (1)
	{
		read(0, &(*buf), 1);
		write(1, &(*buf), 1);
	}
}

void	ft_cat_file(int filedes)
{
	char	buf[1];

	while (read(filedes, &(*buf), 1) > 0)
		write(1, &(*buf), 1);
}

void	ft_cat_files(int file_count, char **file_name)
{
	int filedes;
	int i;

	i = 0;
	while (i < file_count)
	{
		if ((filedes = open(file_name[i], O_RDWR)) == -1)
		{
			if (errno != 13)
				ft_error_msg(errno, CMDNAME, file_name[i]);
			else if ((filedes = open(file_name[i], O_RDONLY)) != -1)
				ft_cat_file(filedes);
			else
				ft_error_msg(errno, CMDNAME, file_name[i]);
		}
		else
			ft_cat_file(filedes);
		close(filedes);
		i++;
	}
}
