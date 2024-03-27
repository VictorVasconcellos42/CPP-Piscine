# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/15 15:33:42 by vde-vasc          #+#    #+#              #
#    Updated: 2024/03/27 02:50:50 by vde-vasc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	iter

COMPILE	=	c++

FLAG	=	-g -Wall -Wextra -Werror #-std=c++98

SRCS	=	main.cpp

all: $(NAME)

$(NAME): ${SRCS}
	${COMPILE} ${FLAG} ${SRCS} -o $(NAME)

clean:
	@rm -rf ${NAME}

fclean: clean
	@rm -rf ${NAME}

re: fclean all

.PHONY: all re fclean clean

