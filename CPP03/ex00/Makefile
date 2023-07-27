# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/22 13:08:00 by vde-vasc          #+#    #+#              #
#    Updated: 2023/07/27 17:04:17 by vde-vasc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = claptrap

CXX	=	c++

CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp ClapTrap.cpp



all: $(NAME)

$(NAME): ${SRCS}
	${CXX} ${CFLAGS} ${SRCS} -o $(NAME)

clean:
	@rm -rf ${NAME}

fclean: clean
	@rm -rf ${NAME}

re: fclean all

.PHONY: all re fclean clean 
