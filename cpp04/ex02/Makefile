# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/30 17:13:47 by bbaudry           #+#    #+#              #
#    Updated: 2022/02/07 22:49:13 by bbaudry          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = realAnimal
CXX = c++
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp WrongCat.cpp WrongAnimal.cpp
SRCS_DIR = ./
OBJS_DIR 	= 	objects/
OBJ 		= 	$(SRCS:.cpp=.o)
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))

$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

all: $(NAME)


clean:
	$(RM) -r $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all
