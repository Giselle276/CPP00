NAME = megaphone

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror

# Colores
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
CYAN = \033[1;36m
RESET = \033[0m

# Banner MEGAPHONE
HEADER = \
$(GREEN)\
███╗   ███╗███████╗ ██████╗  █████╗ ██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗\n\
████╗ ████║██╔════╝██╔════╝ ██╔══██╗██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝\n\
██╔████╔██║█████╗  ██║  ███╗███████║██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  \n\
██║╚██╔╝██║██╔══╝  ██║   ██║██╔══██║██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  \n\
██║ ╚═╝ ██║███████╗╚██████╔╝██║  ██║██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗\n\
╚═╝     ╚═╝╚══════╝ ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝\
$(RESET)

# Compilar archivos .cpp a .o
%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

# Regla principal
$(NAME): $(OBJ)
	@echo "$(HEADER)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(YELLOW)Compiled ✅$(RESET)"

all: $(NAME)

clean:
	@rm -f $(OBJ)
	@echo "$(CYAN)Cleaned 🗑️$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(BLUE)Fully cleaned 🗑️🧹$(RESET)"

re: fclean all

.PHONY: clean fclean all re