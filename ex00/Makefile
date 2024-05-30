NAME = Zombie
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
SRC = main.cpp Zombie.cpp
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	@echo "\033[34m'$(NAME)'\033[0m is ready to execute!"

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(OBJS) $(NAME)

re: fclean all