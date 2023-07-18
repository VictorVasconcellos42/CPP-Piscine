# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/22 13:08:00 by vde-vasc          #+#    #+#              #
#    Updated: 2023/07/18 03:52:08 by vde-vasc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

CXX	=	c++

CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp humanA.cpp humanB.cpp weapon.cpp



all: $(NAME)

$(NAME): ${SRCS}
	${CXX} ${CFLAGS} ${SRCS} -o $(NAME)

clean:
	@rm -rf ${NAME}

fclean: clean
	@rm -rf ${NAME}

re: fclean all

.PHONY: all re fclean clean 
