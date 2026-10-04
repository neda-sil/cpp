# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: neda-sil <neda-sil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/02 11:39:15 by neda-sil          #+#    #+#              #
#    Updated: 2026/10/02 13:56:21 by neda-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#			FILES

FILES	=	main Handler
cfiles	=	$(addsuffix .cpp, $(FILES))
objs	=	$(addsuffix .o, $(FILES))

#			NAMES

NAME	=	files
comp	=	c++
flags	=	-Wall -Wextra -Werror -std=c++98

#			RULES

all		:	$(NAME)

$(NAME)	:	$(objs)
	$(comp) $(flags) $(objs) -o $@

%.o		:	%.cpp
	$(comp) $(flags) -c $< -o $@

test1	:	all
	@echo "coucou je suis Brigitte" > inFile
	@./$(NAME) inFile "coucou" bonjour

test2	:	all
	@echo "jh nh sais pas ch quh jh pourrais hssayhr" > inFile
	@./$(NAME) inFile h e

test3	:	all
	@echo "faisons" > inFile
	@echo "plusieurs" >> inFile
	@echo "colonnes" >> inFile
	@./$(NAME) inFile colonnes lignes

clean	:
	rm -rf $(objs) inFile*

fclean	:	clean
	rm -rf $(NAME)

re		:	fclean all

.PHONY	: all clean fclean re
