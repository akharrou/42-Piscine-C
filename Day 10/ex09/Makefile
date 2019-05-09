# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/04 22:23:09 by akharrou          #+#    #+#              #
#    Updated: 2018/11/06 19:39:06 by akharrou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEL         =   /bin/rm -rf

CC          =   gcc
CFLAGS      =   -Wall -Wextra -Werror

NAME        =   ft_advanced_do-op

SRCS        =   main.c \
                ft_opp.c \
                utils.c \
                output.c

OBJS        =   $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean:
	$(DEL) *.o

fclean: clean
	$(DEL) $(NAME)

re: fclean all
