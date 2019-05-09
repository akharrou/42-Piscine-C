/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 09:00:18 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/29 17:31:34 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && nb-- > 0)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
