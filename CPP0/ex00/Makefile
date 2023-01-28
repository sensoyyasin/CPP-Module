# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yasinsensoy <yasinsensoy@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/14 15:21:41 by yasinsensoy       #+#    #+#              #
#    Updated: 2023/01/14 15:23:02 by yasinsensoy      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++
CLAFGS = -Wall -Wextra -Werror
SRCS = megaphone.cpp
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