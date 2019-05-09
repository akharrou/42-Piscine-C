#!/bin/sh
gcc -Wall -Werror -Wextra -c ft_putchar.c
gcc -Wall -Werror -Wextra -c ft_putstr.c
gcc -Wall -Werror -Wextra -c ft_strcmp.c
gcc -Wall -Werror -Wextra -c ft_strlen.c
gcc -Wall -Werror -Wextra -c ft_swap.c

ar -rvs libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
