# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vde-vasc <vde-vasc@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/22 13:08:00 by vde-vasc          #+#    #+#              #
#    Updated: 2023/07/22 13:32:32 by vde-vasc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CXX	=	c++

CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp Contact.cpp PhoneBook.cpp

OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	${CXX} ${CFLAGS} -c $< -o $@ 

all: ${OBJS} $(NAME)

$(NAME): ${OBJS}
	${CXX} ${CFLAGS} ${OBJS} -o $(NAME)

clean:
	@rm -rf ${OBJS}

fclean: clean
	@rm -rf ${NAME}

re: fclean all

.PHONY: all re fclean clean 
