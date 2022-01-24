# the compiler: gcc for C program, define as g++ for C++

NAME = xSmallPhoneBook
CXX = clang++
CXXFLAGS  = -Wall -Wextra -Werror -I
SRCS	=	test.cpp Account.cpp
SRCS_DIR = ./
OBJS_DIR 	= 	objects/
OBJ 		= 	$(SRCS:.cpp=.o)
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))

$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@clang++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@clang++ $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)


clean:
	$(RM) $(NAME)

fclean: clean
	$(RM) -r $(OBJS_DIR)

re: fclean all
