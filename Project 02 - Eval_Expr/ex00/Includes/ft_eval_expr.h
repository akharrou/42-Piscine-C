/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval_expr.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 15:52:01 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/12 13:18:55 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVAL_EXPR_H
# define FT_EVAL_EXPR_H

# define ISDIGIT(c) (c >= '0' && c <= '9')
# define ISBLANK(c) (c <= 32)

int		ft_parse_number(void);
int		ft_parse_product(void);
int		ft_parse_sum(void);
char	*ft_remove_blank(char *str);
int		eval_expr(char *str);

int		ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

#endif
