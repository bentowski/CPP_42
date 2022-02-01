# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/30 16:00:30 by bbaudry           #+#    #+#              #
#    Updated: 2022/02/01 23:55:15 by bbaudry          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = talking
CXX = clang++
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp Fixed.cpp
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
