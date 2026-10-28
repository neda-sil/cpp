# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/27 13:26:02 by neda-sil          #+#    #+#              #
#    Updated: 2026/10/27 13:52:13 by neda-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#			FILES

FILES	=	main Bureaucrat
HEADERS	=	Bureaucrat.hpp

objs	=	$(addsuffix .o, $(FILES))

#			NAMES

NAME	=	bureaucrat
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