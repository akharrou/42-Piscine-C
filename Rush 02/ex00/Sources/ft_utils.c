/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 12:18:59 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/11 16:48:18 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

#include "ft_rush.h"

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (*src && i < n)
		dest[i++] = *src++;
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

char	*ft_realloc(char *buffer, int init_size)
{
	char	*new_buffer;

	if (!(new_buffer = malloc(init_size * 2)))
		return (NULL);
	ft_strncpy(new_buffer, buffer, init_size - 1);
	free(buffer);
	return (new_buffer);
}

char	*ft_import_stdin(void)
{
	char	*byte_stream;
	char	c;
	int		i;
	int		buf_size;

	buf_size = INIT_BUFSIZ;
	byte_stream = malloc(buf_size);
	if (byte_stream == NULL)
		return (NULL);
	i = 0;
	while (read(0, &c, 1) > 0)
	{
		byte_stream[i++] = c;
		if (i >= buf_size - 1)
		{
			byte_stream = ft_realloc(byte_stream, buf_size);
			buf_size *= 2;
		}
	}
	byte_stream[i] = '\0';
	return (byte_stream);
}
