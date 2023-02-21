# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yasinsensoy <yasinsensoy@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 15:21:41 by yasinsensoy       #+#    #+#              #
#    Updated: 2023/01/17 16:30:25 by yasinsensoy      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phone
CC = c++
CLAFGS = -Wall -Wextra -Werror
SRCS = *.cpp
OBJ = $(SRCS:.cpp = .o)

$(NAME): $(OBJ)
	@$(CC) $(CLAFGS) $(SRCS) -o $(NAME)
	@echo "\033[1;92mCompiled succesfully..\033[0m"

all: $(NAME)

clean:
	rm -rf  $(NAME)

fclean: clean
	

re: fclean all

.PHONY: all clean fclean re