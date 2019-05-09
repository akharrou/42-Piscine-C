/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 16:37:43 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/02 16:43:42 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>

# define SAVE_THE_WORLD "flies spaceships and shoots bad guys"

typedef struct	s_perso
{
	char	*name;
	float	life;
	int		age;
	char	*profession;
}				t_perso;

#endif
