##
## EPITECH PROJECT, 2024
## makefile
## File description:
## emacs
##

RED=\033[0;31m
GREEN=\033[0;32m
YELLOW=\033[1;33m
NC=\033[0m

NAME = my_paint

SRC =	src/main.c                          \
		src/my_paint.c                       \
		src/analyse/save.c                   \
		src/spawn/analyse_button_file_spawn.c \
		src/spawn/analyse_button_edit_spawn.c  \
		src/spawn/analyse_button_help_spawn.c   \
		src/analyse/analyse_tools.c              \
		src/buttons/nav_button.c                  \
		src/analyse/analyse_button_click.c         \
		src/spawn/nav_button_spawn.c                \
		src/spawn/nav_button_spawn2.c                \
		src/buttons/tools_button.c					  \
		src/buttons/choice_tools.c					  \
		src/buttons/tools_choice_button.c              \
		src/init.c                                      \
		src/destroy.c                                    \

OBJ =  $(SRC:.c=.o)

CFLAGS = -I ./include -Wall -g3

LIBS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

.PHONY: all clean fclean re

$(NAME): $(OBJ)
	@echo -e "$(YELLOW)■-■-■ COMPILATION GOOD ■-■-■$(NC)"
	gcc -o $(NAME) $(OBJ) $(LIBS) $(CFLAGS)
	@echo -e "$(GREEN)■-■-■-■-■-■ GOOD ■-■-■-■-■$(NC)"

all : $(NAME)

clean :
	rm -f $(OBJ)
	rm -f *~
	rm -f #*#
	@echo -e "$(GREEN)CLEAN$(NC)"

fclean : clean
	@echo -e "$(RED)CLEAN -> $(NAME)...$(NC)"
	rm -f $(NAME)
	@echo -e "$(GREEN)■-■-■-■-■ GOOD ■-■-■-■-■$(NC)"

re : fclean all
