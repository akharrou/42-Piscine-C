/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 08:59:56 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/29 17:38:04 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*anchor;

	if (!(*to_find))
		return (str);
	i = -1;
	while (str[++i])
		if (str[i] == to_find[0])
		{
			j = 0;
			anchor = (str + i);
			while (str[i] && to_find[j] && str[i] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (anchor);
				i++;
				j++;
			}
			if (!str[i])
				return (0);
		}
	return (0);
}
