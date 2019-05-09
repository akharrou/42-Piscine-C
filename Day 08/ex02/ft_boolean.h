/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 21:38:59 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/04 19:14:26 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# ifndef EVEN
#  define EVEN(nbr) (nbr % 2 == 0)
# endif

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef FALSE
#  define FALSE 0
# endif

# ifndef EVEN_MSG
#  define EVEN_MSG "I have an even number of arguments.\n"
# endif

# ifndef ODD_MSG
#  define ODD_MSG "I have an odd number of arguments.\n"
# endif

# ifndef SUCCESS
#  define SUCCESS 0
# endif

# ifndef T_BOOL
#  define T_BOOL

typedef int	t_bool;

# endif

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
