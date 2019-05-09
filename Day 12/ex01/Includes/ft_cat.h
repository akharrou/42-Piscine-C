/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:45:33 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/07 16:45:37 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

void			ft_infinite_read_loop(void);
void			ft_cat_file(int filedes);
void			ft_cat_files(int file_count, char **file_name);

#endif
