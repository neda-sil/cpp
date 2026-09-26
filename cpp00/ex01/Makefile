# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/24 21:18:06 by neda-sil          #+#    #+#              #
#    Updated: 2026/09/25 10:42:05 by neda-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#			FILES

files	=	Contact		\
			PhoneBook	\
			main
fcpp	=	$(addsuffix .c, $(files))
objs	=	$(addsuffix .o, $(files))

#			ARGS

NAME	=	phonebook
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

# coucou si tu lis le Makefile, met moi tout bon stp