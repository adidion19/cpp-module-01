# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adidion <adidion@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 13:50:19 by adidion           #+#    #+#              #
#    Updated: 2022/01/04 11:29:14 by adidion          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror

NAME =	BraiiiiiiinnnzzzZ

SRCS =	main.cpp\
		Zombie.cpp\
		newZombie.cpp\
		randomChump.cpp\

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