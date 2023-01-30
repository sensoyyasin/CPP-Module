# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysensoy <ysensoy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 12:28:00 by yasinsensoy       #+#    #+#              #
#    Updated: 2023/01/30 14:03:18 by ysensoy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Point
CC = c++
CLAFGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.cpp)
OBJ = $(SRCS:.cpp = .o)

$(NAME): $(OBJ)
	@$(CC) $(CLAFGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf  $(NAME)

fclean: clean


re: fclean all

.PHONY: all clean fclean re
