# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/22 13:08:00 by vde-vasc          #+#    #+#              #
#    Updated: 2023/08/03 07:37:16 by vde-vasc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = diamondTrap

CXX	=	c++

CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp FragTrap.cpp ScavTrap.cpp ClapTrap.cpp DiamondTrap.cpp



all: $(NAME)

$(NAME): ${SRCS}
	${CXX} ${CFLAGS} ${SRCS} -o $(NAME)

clean:
	@rm -rf ${NAME}

fclean: clean
	@rm -rf ${NAME}

re: fclean all

.PHONY: all re fclean clean 
