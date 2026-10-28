# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/05 15:55:22 by neda-sil          #+#    #+#              #
#    Updated: 2026/10/28 19:11:31 by neda-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#			FILES

FILES	=	Fixed Point bsp main
HEADERS	=	Fixed.hpp Point.hpp

cfiles	=	$(addsuffix .cpp, $(FILES))
objs	=	$(addsuffix .o, $(FILES))
gch		=	$(addsuffix .gch, $(HEADERS))

#			NAMES

NAME	=	bsp
comp	=	c++
flags	=	-Wall -Wextra -Werror -std=c++98

#			RULES

all		:	$(NAME)

$(NAME)	:	$(objs) $(HEADERS)
	$(comp) $(flags) $(HEADERS) $(objs) -o $@

%.o		:	%.cpp
	$(comp) $(flags) -c $< -o $@

clean	:
	rm -rf $(objs) $(gch)

fclean	:	clean
	rm -rf $(NAME)

re		:	fclean all

.PHONY	: all clean fclean re
