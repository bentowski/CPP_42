# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/30 17:13:47 by bbaudry           #+#    #+#              #
#    Updated: 2022/01/31 15:59:38 by bbaudry          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucratie
CXX = clang++
CXXFLAGS  = -Wall -Wextra -Werror -I -std=c++98
SRCS	=	main.cpp Bureaucrat.cpp
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
