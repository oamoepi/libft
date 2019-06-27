# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amoepi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 15:06:41 by amoepi            #+#    #+#              #
#    Updated: 2019/06/27 23:54:56 by amoepi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFILES = *.c
OFILES = *.o

$(NAME):
	gcc -c -Wall -Wextra -Werror $(CFILES)
	ar rcs $(NAME) $(OFILES)
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -f $(OFILES)
fclean: clean
	rm -f $(NAME)
	rm -f a.out
	
re: fclean all
