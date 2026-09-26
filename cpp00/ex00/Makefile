# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/23 14:17:38 by neda-sil          #+#    #+#              #
#    Updated: 2026/09/24 13:23:12 by neda-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#			FILES

files	=	megaphone
fcpp	=	$(addsuffix .c, $(files))
objs	=	$(addsuffix .o, $(files))

#			ARGS

NAME	=	megaphone
comp	=	c++
flags	=	-Wall -Werror -Wextra -std=c++98

#			RULES

all		:	$(NAME)

$(NAME)	:	$(objs)
	$(comp) $(flags) $(objs) -o $(NAME)

%.o		:	%.c
	$(comp) $(flags) -c $< -o $@

clean	:
	rm -rf $(objs)

fclean	:	clean
	rm -rf $(NAME)

re		:	fclean all

.PHONY	: all clean fclean re