# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/13 14:09:48 by neda-sil          #+#    #+#              #
#    Updated: 2026/10/19 15:27:00 by neda-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#			FILES

FILES	=	main ClapTrap
HEADERS	=	ClapTrap.hpp

objs	=	$(addsuffix .o, $(FILES))

#			NAMES

NAME	=	claptrap
comp	=	c++
flags	=	-Wall -Wextra -Werror -std=c++98

#			RULES

all		:	$(NAME)

$(NAME)	:	$(objs)
	$(comp) $(flags) $(objs) -o $@

%.o		:	%.cpp $(HEADERS)
	$(comp) $(flags) -c $< -o $@

leaks	:	all
	valgrind --leak-check=full --track-fds=yes --show-leak-kinds=all -s ./$(NAME)


clean	:
	rm -rf $(objs)

fclean	:	clean
	rm -rf $(NAME)

re		:	fclean all

.PHONY	: all clean fclean re
