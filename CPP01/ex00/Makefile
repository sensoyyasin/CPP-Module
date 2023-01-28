# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yasinsensoy <yasinsensoy@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 20:38:56 by ysensoy           #+#    #+#              #
#    Updated: 2023/01/19 11:04:05 by yasinsensoy      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ
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
