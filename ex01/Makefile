GREEN = \033[0;92m
YELLOW = \033[0;96m
BLUE = \033[1;96m
RED = \033[1;31m
RESET = \033[0;39m

NAME = phonebook
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 
OBJS_DIR = objs/

OBJS = $(addprefix $(OBJS_DIR), $(SRCS: .cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@printf "$(YELLOW)Linking $(NAME)...$(RESET)"
	@$(CPP) $(FLAGS) $(OBJS) -o $(NAME)


$(OBJS_DIR)%.o: %.cpp
	@mkdir -p $(dir $@)
	@printf "$(BLUE)Compiling $<... $(RESET)"
	@$(CPP) $(FLAGS) -c $< -o $@
	@printf "\b$(GREEN)OK!$(RESET)\n

clean:
	@rm -rf $(OBJS_DIR)
	@printf "$(RED) Objects cleaned!$(RESET)"

fclean: clean
	@rm -rf $(NAME)
	@printf "$(RED) Executable cleaned!$(RESET)"

re: fclean all

.PHONY: all clean fclean re