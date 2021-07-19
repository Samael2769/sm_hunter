##
## EPITECH PROJECT, 2021
## Untitled (Workspace)
## File description:
## Makefile
##

SRC		=	sm_parser.c\
			sm_createwindow.c\

OBJ		=		$(SRC:c=o)

NAME	=		libsm_libsfml.a

INCLUDE_NAME	=	sm_libsfml.h

#####################################
TEST_NAME	=	unit_test

DIR_TEST	=	tests/

TEST_ADD	=	tests_

SRC_TEST	=	$(addprefix $(TEST_ADD), $(SRC))

OBJ_TEST	=	$(addprefix $(DIR_TEST), $(SRC_TEST))

LDLIBS	=	--coverage -lcriterion

COVR	=	gcovr
#####################################

AR	=	ar

RM	=	rm

COPY	=	cp

all: $(NAME)

$(NAME): $(OBJ)
		$(AR) rc $(NAME) $(OBJ)
		$(COPY) $(NAME) ../../
		$(COPY) $(INCLUDE_NAME) ../../includes/

clean:
		$(RM) -f $(OBJ)

fclean: clean
		$(RM) -f $(NAME)
		$(RM) -f *gc*
		$(RM) -f $(TEST_NAME)
		$(RM) -f ../../$(NAME)

unit_test: fclean $(NAME)
	touch $(OBJ_TEST)
	gcc -o $(TEST_NAME) $(SRC) $(OBJ_TEST) $(LDLIBS)

tests_run:	unit_test
	./$(TEST_NAME)
	$(COVR) --exclude $(DIR_TEST)
	$(COVR) --exclude $(DIR_TEST) --branch

re: fclean all

.PHONY:	all clean fclean re