# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akharrou <akharrou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/09 22:48:16 by akharrou          #+#    #+#              #
#    Updated: 2018/11/14 23:36:54 by akharrou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COMPILER & FLAGS ============================================================

CC      =       gcc

LDFLAGS =       $(FSFLAGS) $(EXFLAGS)

CFLAGS 	=       -Wall -Wextra -Werror

EXFLAGS =       -O0 \
                -Wshadow-all \
                -Wno-sign-compare

FSFLAGS =       -fsanitize=integer \
                -fsanitize=undefined \
                -fsanitize=address \
                -fsanitize-address-use-after-scope


# VARIABLES ===================================================================

INC_DIR   =     Includes/
SRC_DIR   =     Sources/


NAME 	  =     bsq

SOURCES   =     $(SRC_DIR)main.c \
                $(SRC_DIR)ft_map.c \
                $(SRC_DIR)ft_read.c \
                $(SRC_DIR)ft_utils.c \
                $(SRC_DIR)ft_bsq.c

OBJECTS   :=    $(SOURCES:.c=.o)




# MAIN ========================================================================

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(LDFLAGS) $^ -o $@
	@echo && echo "   [√] 	[Compilation Successful]"
	@echo && echo "Pwd/" 		&& 	ls "./" && echo

%.o: %.c
	@echo "Compiling => " $<
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@




# HOUSE KEEPING ===============================================================

DEL 	= /bin/rm -rf
JUNK 	= *.dSYM

.PHONY: all clean fclean dclean re c d x

clean:
	@echo
	@$(DEL) $(OBJECTS)
	@echo "   [√] 	[Objects Cleared]"

fclean: clean
	@$(DEL) $(NAME)
	@echo "   [√] 	[Binaries Cleared]"

dclean: clean
	@$(DEL) $(JUNK)
	@echo "   [√] 	[Debugger Info Cleared]"

re: fclean all

# CLEANING SHORTCUTS ==========================================================

c: clean

d: clean dclean
	@echo && echo "Sources/" 	&& ls "Sources/" && echo

x: fclean dclean
	@echo && echo "Pwd/" 		&& 	ls "./"
	@echo && echo "Sources/" 	&& 	ls "Sources/"
	@echo && echo "Includes/" 	&& 	ls "Includes/"
	@echo

# =============================================================================
