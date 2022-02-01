# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbaudry <bbaudry@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/30 15:56:40 by bbaudry           #+#    #+#              #
#    Updated: 2022/02/01 23:51:02 by bbaudry          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = xSmallPhoneBook
CXX = clang++
CXXFLAGS  = -Wall -Wextra -Werror
SRCS	=	main.cpp Contact.cpp Phonebook.cpp
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
