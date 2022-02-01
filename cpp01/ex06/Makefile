# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/30 15:59:23 by bbaudry           #+#    #+#              #
#    Updated: 2022/02/01 23:54:15 by bbaudry          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = karenFilter
CXX = clang++
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp Karen.cpp
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
