# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 17:26:57 by akharrou          #+#    #+#              #
#    Updated: 2018/11/08 18:44:23 by akharrou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		=       gcc

LDFLAGS =       $(EXFLAGS) $(FSFLAGS)

CFLAGS 	=       -Wall -Wextra -Werror #$(LDFLAGS)

EXFLAGS =       -g -std=c11 -O0 \
                -Wshadow-all \
                -Wno-sign-compare 

FSFLAGS =       -fsanitize=integer \
                -fsanitize=undefined \
                -fsanitize=address \
                -fsanitize-address-use-after-scope

NAME      =     ft_display_file

SOURCES   =     main.c

all: $(NAME)

$(NAME): main.c
	@$(CC) $(CFLAGS) $< -o $@

DEL 	= /bin/rm -rf

JUNK 	= *.dSYM

.PHONY: all clean fclean dclean re c d x

clean:
	@$(DEL) $(OBJECTS)

fclean: clean
	@$(DEL) $(NAME)

dclean: clean
	@$(DEL) $(JUNK)

re: fclean all

c: clean

d: clean dclean

x: fclean dclean
