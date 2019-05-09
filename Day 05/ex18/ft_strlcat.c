/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 17:12:47 by akharrou          #+#    #+#             */
/*   Updated: 2019/02/20 17:44:07 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				dst_len;
	int				src_len;
	int				bytes_left;
	unsigned int	i;
	unsigned int	j;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	bytes_left = (int)size - dst_len - 1;
	if (bytes_left >= 0)
	{
		i = dst_len;
		j = 0;
		while (bytes_left-- && src[j])
			dest[i++] = src[j++];
		dest[i] = '\0';
		return (src_len + dst_len);
	}
	return (src_len + size);
}
