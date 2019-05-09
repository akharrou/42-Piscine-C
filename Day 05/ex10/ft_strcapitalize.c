/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 14:02:48 by akharrou          #+#    #+#             */
/*   Updated: 2018/10/30 19:28:17 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ISALNUM(c) (ISALPHA(c) || ISNUM(c))
#define ISALPHA(c) ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
#define ISUPPER(c) (c >= 'A' && c <= 'Z')
#define ISLOWER(c) (c >= 'a' && c <= 'z')
#define ISNUM(c) ((c >= '0' && c <= '9'))

char	*ft_strcapitalize(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		while (str[i] && !ISALNUM(str[i]))
			i++;
		if (str[i] && ISLOWER(str[i]))
			str[i] = str[i] - 32;
		while (str[i] && ISALNUM(str[i++]))
			if (ISUPPER(str[i]))
				str[i] = str[i] + 32;
	}
	return (str);
}
