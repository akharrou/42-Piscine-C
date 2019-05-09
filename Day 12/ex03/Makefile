# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 23:48:43 by akharrou          #+#    #+#              #
#    Updated: 2018/11/08 19:12:28 by akharrou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COMPILER & FLAGS ============================================================

CC 		= 		gcc

LDFLAGS = 		$(EXFLAGS) $(FSFLAGS)

CFLAGS 	= 		-Wall -Wextra -Werror #$(LDFLAGS)

EXFLAGS =   	-g -std=c11 -O0 \
         		-Wshadow-all \
         		-Wno-sign-compare

FSFLAGS =       -fsanitize=integer \
         		-fsanitize=undefined \
         		-fsanitize=address \
         		-fsanitize-address-use-after-scope


# VARIABLES ===================================================================

INC_DIR   =     Includes/
SRC_DIR   =     Sources/


NAME 	  =     ft_hexdump

SOURCES   =     $(SRC_DIR)main.c

OBJECTS   :=    $(SOURCES:.c=.o)




# MAIN ========================================================================

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@
	@./ft_hexdump

%.o: %.c
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@




# HOUSE KEEPING ===============================================================

DEL 	= rm -rf
JUNK 	= *.dSYM

.PHONY: all clean fclean dclean re c d x

clean:
	@$(DEL) $(OBJECTS)

fclean: clean
	@$(DEL) $(NAME)

dclean: clean
	@$(DEL) $(JUNK)

re: fclean all

# CLEANING SHORTCUTS ==========================================================

c: clean

d: clean dclean

x: fclean dclean


# =============================================================================
