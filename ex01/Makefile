NAME = phonebook

SRC = main.cpp PhoneBook.cpp Contact.cpp

OBJ = $(SRC:.cpp=.o)


CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98


GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
CYAN = \033[1;36m
RESET = \033[0m


%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(YELLOW)Compiled ✅$(RESET)"

all: $(NAME)

clean:
	@rm -f $(OBJ)
	@echo "$(CYAN)Cleaned 🗑️$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(BLUE)Fully cleaned 🧹$(RESET)"

re: fclean all

.PHONY: all clean fclean re