# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 17:27:06 by akharrou          #+#    #+#              #
#    Updated: 2018/11/08 19:04:57 by akharrou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= 		gcc

LDFLAGS = 		$(CFLAGS)

CFLAGS 	= 		-Wall -Wextra -Werror

EXFLAGS =   	-g -std=c11 -O0 \
         		-Wshadow-all \
         		-Wno-sign-compare 

FSFLAGS =       -fsanitize=integer \
         		-fsanitize=undefined \
         		-fsanitize=address \
         		-fsanitize-address-use-after-scope

INC_DIR   =     Includes/

SRC_DIR   =     Sources/

NAME 	  =     ft_cat

SOURCES   =     $(SRC_DIR)main.c \
                $(SRC_DIR)ft_utils.c

OBJECTS   :=    $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

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
