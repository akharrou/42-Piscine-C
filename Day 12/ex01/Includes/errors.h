/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:04:28 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/10 22:18:29 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_H
# define ERRORS_H

# include <errno.h>

# define EACCES_MSG "Permission denied\n"
# define ENOENT_MSG "No such file or directory\n"
# define EISDIR_MSG "Is a directory\n"
# define EBADF_MSG "Bad file descriptor\n"
# define EAGAIN_MSG "Resource temporarily unavailable\n"
# define EINTR_MSG "Interrupted function call\n"
# define EIO_MSG "Input/output error\n"
# define EINVAL_MSG "Invalid argument\n"

typedef struct	s_error
{
	int		error_no;
	char	*error_msg;
}				t_error;

t_error g_error_msg_map[] =
{
	{EACCES, EACCES_MSG},
	{ENOENT, ENOENT_MSG},
	{EISDIR, EISDIR_MSG},
	{EBADF, EBADF_MSG},
	{EAGAIN, EAGAIN_MSG},
	{EINTR, EINTR_MSG},
	{EIO, EIO_MSG},
	{EINVAL, EINVAL_MSG},
	{0, 0}
};

void			ft_putstr(char *str);
void			ft_error_msg(int error_number, char *cmd_name, char *file_name);

#endif
