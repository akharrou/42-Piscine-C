/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 18:17:51 by akharrou          #+#    #+#             */
/*   Updated: 2018/11/11 17:12:47 by akharrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H

# define REAL_RUSH (g_rush_test[i].rush_ft(rush_length, rush_height))
# define THEY_MATCH(stdin, rush) (ft_strcmp(stdin, rush) == 0)
# define INIT_BUFSIZ 200

typedef struct	s_rush_info
{
	char	*name;
	char	first_char;
	char	*(*rush_ft)(int, int);
}				t_rush;

extern char		*g_stdin_buf;
extern char		*g_real_rush_buf;

char			*ft_rush00(int x, int y);
char			*ft_rush01(int x, int y);
char			*ft_rush02(int x, int y);
char			*ft_rush03(int x, int y);
char			*ft_rush04(int x, int y);

int				ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
void			ft_print_match_msg(char *rush_name, int rush_length,
				int rush_height, int matches_so_far);

int				ft_strcmp(char *s1, char *s2);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
char			*ft_realloc(char *buffer, int init_size);
char			*ft_import_stdin(void);

void			ft_get_rush_info(char *first_char, int *rush_length,
				int *rush_height);
int				ft_rush_detector_3000(char first_char, int rush_length,
				int rush_height);

#endif
