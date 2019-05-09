/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 13:08:35 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/02 12:52:12 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# include <stdlib.h>

typedef struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;

char				**ft_split_whitespaces(char *str);
void				ft_show_tab(struct s_stock_par *par);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);

int					ft_strlen(char *str);
char				*ft_strdup(char *src);

int					ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putstrtab(char **tab);
void				ft_putnbr(int nb);

#endif
