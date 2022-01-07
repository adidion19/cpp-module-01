# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adidion <adidion@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 17:30:08 by adidion           #+#    #+#              #
#    Updated: 2022/01/04 11:28:54 by adidion          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror

NAME =	"ex03"

SRCS =	main.cpp\
		Weapon.cpp\
		HumanA.cpp\
		HumanB.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(OBJS)

re: fclean all

.PHONY: re bonus clean fclean all