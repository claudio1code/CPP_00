GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;96m
RED = \033[1;31m
DEF_COLOR = \033[0;39m


NAME = megaphone
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98


SRCS = megaphone.cpp
OBJS_DIR = objs/

OBJS = $(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME):$(OBJS)
	@printf "$(YELLOW)Linking $(NAME)... $(DEF_COLOR)"
	@$(CPP) $(FLAGS) $(OBJS) -o $(NAME) 
	@printf "\b$(GREEN)OK!$(DEF_COLOR)\n"

$(OBJS_DIR)%.o: %.cpp
	@mkdir -p $(dir $@)
	@printf "$(BLUE)Compiling $<... $(DEF_COLOR)"
	@$(CPP) $(FLAGS) -c $< -o $@
	@printf "\b$(GREEN)OK!$(DEF_COLOR)\n"

clean:
	@rm -rf $(OBJS_DIR)
	@echo "$(RED)Objects cleaned!$(DEF_COLOR)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)Executable cleaned!$(DEF_COLOR)"

re: fclean all

.PHONY: all fclean clean re