# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/26 15:02:00 by neda-sil          #+#    #+#              #
#    Updated: 2026/09/26 21:27:19 by neda-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#			FILES

files	=	Account tests
fcpp	=	$(addsuffix .c, $(files))
objs	=	$(addsuffix .o, $(files))

#			ARGS

NAME	=	bank
comp	=	c++
flags	=	-Wall -Werror -Wextra -std=c++98

#			RULES

all		:	$(NAME)

$(NAME)	:	$(objs)
	$(comp) $(flags) $(objs) -o $(NAME)

%.o		:	%.cpp
	$(comp) $(flags) -c $< -o $@

clean	:
	rm -rf $(objs)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re