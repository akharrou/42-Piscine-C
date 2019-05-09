# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/04 22:02:20 by akharrou          #+#    #+#              #
#    Updated: 2018/11/06 19:38:31 by akharrou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEL         =    /bin/rm -rf

CC          =    gcc
CFLAGS      =    -Wall -Wextra -Werror

NAME        =    libft.a
SRC_DIR     =    srcs
INC_DIR     =    includes

SRCS        =    $(SRC_DIR)/ft_putchar.c \
                 $(SRC_DIR)/ft_putstr.c \
                 $(SRC_DIR)/ft_strcmp.c \
                 $(SRC_DIR)/ft_strlen.c \
                 $(SRC_DIR)/ft_swap.c

OBJS        =    ft_putchar.o \
                 ft_putstr.o \
                 ft_strcmp.o \
                 ft_strlen.o \
                 ft_swap.o

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rvs $(NAME) $^

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c -I $(INC_DIR) $^

clean:
	@$(DEL) *.o

fclean: clean
	@$(DEL) $(NAME)

re: fclean all
