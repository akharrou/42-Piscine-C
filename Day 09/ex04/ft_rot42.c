/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 00:31:38 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/05 18:02:08 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if ((str[i] + (42 % 26)) <= 'Z')
				str[i] = str[i] + (42 % 26);
			else
				str[i] = (('A' - 1) + (str[i] + (42 % 26)) - 'Z');
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((str[i] + (42 % 26)) <= 'z')
				str[i] = str[i] + (42 % 26);
			else
				str[i] = (('a' - 1) + (str[i] + (42 % 26)) - 'z');
		}
	return (str);
}

#include <stdio.h>

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", ft_rot42(argv[1]));
	return 0;
}
