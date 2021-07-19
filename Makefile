##
## EPITECH PROJECT, 2021
## $(MAKE)file_105torus
## File description:
## ..
##

DIR	=	sources/

DIR_LIB	=	lib/sm_libc

DIR_SFML	=	lib/sm_libsfml

CFLAGS	=	-W -Wall -Wextra

CPPFLAGS	=	-I./includes

SRC_FILES	=	sm_hunter.c\

SRC_MAIN_FILE	=	main.c\

SRC	=	$(addprefix $(DIR), $(SRC_FILES))

SRC_MAIN	=	$(addprefix $(DIR), $(SRC_MAIN_FILE))

OBJ	=	$(SRC:.c=.o)

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)

LDFLAGS	= -L.

LDLIBS		=	-lsm_libc -lsm_libsfml

CC	=	gcc

NAME	=	sm_hunter

all: $(NAME)

$(NAME): $(OBJ) $(OBJ_MAIN)
		$(MAKE) -sC $(DIR_LIB)
		$(MAKE) -sC $(DIR_SFML)
		$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(LDFLAGS) $(LDLIBS)

clean:
		$(MAKE) -sC $(DIR_LIB) clean
		$(MAKE) -sC $(DIR_SFML) clean
		$(RM) $(OBJ)

fclean: clean
		$(RM) -f $(NAME) $(TEST_NAME)
		$(MAKE) -sC $(DIR_LIB) fclean
		$(MAKE) -sC $(DIR_SFML) fclean

re: fclean $(NAME)

.PHONY: all clean fclean re