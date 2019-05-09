/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 10:52:42 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/02 09:35:11 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup_range(char *src, int start, int end)
{
	int		i;
	char	*dest;

	if (!src)
		return (0);
	if (!(dest = malloc((end - start) + 1)))
		return (0);
	i = 0;
	while (start < end)
		dest[i++] = src[start++];
	dest[i] = '\0';
	return (dest);
}

int		ft_ischarset(char c, char *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}

int		ft_word_count(char *str, char *word_seperators)
{
	int word_count;

	word_count = 0;
	while (*str)
	{
		while (*str && ft_ischarset(*str, word_seperators))
			str++;
		if (*str && !ft_ischarset(*str, word_seperators))
		{
			word_count++;
			while (*str && !ft_ischarset(*str, word_seperators))
				str++;
		}
	}
	return (word_count);
}

char	**ft_split(char *str, char *charset)
{
	char	**strtab;
	int		strtab_size;
	int		i;
	int		j;
	int		k;

	if (!(strtab = malloc(
		sizeof(char *) * (strtab_size = ft_word_count(str, charset) + 1))))
		return ((strtab = 0));
	i = 0;
	k = 0;
	while (k < (strtab_size - 1))
	{
		while (str[i] && ft_ischarset(str[i], charset))
			i++;
		j = i;
		while (str[i] && !ft_ischarset(str[i], charset))
			i++;
		if (!(strtab[k++] = ft_strdup_range(str, j, i)))
			return ((strtab = 0));
	}
	strtab[k] = 0;
	return (strtab);
}
