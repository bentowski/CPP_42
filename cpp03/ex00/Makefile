# the compiler: gcc for C program, define as g++ for C++

NAME = uselessClapTrap
CXX = clang++
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp ClapTrap.cpp
SRCS_DIR = ./
OBJS_DIR 	= 	objects/
OBJ 		= 	$(SRCS:.cpp=.o)
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))

$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	clang++ $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	clang++ $(CXXFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)


clean:
	$(RM) -r $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
