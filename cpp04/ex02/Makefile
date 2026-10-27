# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/17 16:10:30 by neda-sil          #+#    #+#              #
#    Updated: 2026/10/27 12:00:15 by neda-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#			FILES

FILES	=	main AAnimal Dog Cat Brain
HEADERS	=	AAnimal.hpp Dog.hpp Cat.hpp Brain.hpp

objs	=	$(addsuffix .o, $(FILES))

#			NAMES

NAME	=	abstract
comp	=	c++
flags	=	-Wall -Wextra -Werror -std=c++98

#			RULES

all		:	$(NAME)

$(NAME)	:	$(objs)
	$(comp) $(flags) $(objs) -o $@

%.o		:	%.cpp $(HEADERS)
	$(comp) $(flags) -c $< -o $@

leaks	:	all
	valgrind --leak-check=full --track-fds=yes --show-leak-kinds=all ./$(NAME)

test	:	all
	@make leaks > test
	@echo "CHECK 'TEST' FILE"

clean	:
	rm -rf $(objs)

fclean	:	clean
	rm -rf $(NAME) test

re		:	fclean all

.PHONY	: all clean fclean re
