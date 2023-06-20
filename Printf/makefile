# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 16:58:35 by marmonte          #+#    #+#              #
#    Updated: 2022/12/14 16:58:38 by marmonte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_printf.c \
		functions.c

#CC = cc

#CFLAGS = -Wall -Wextra -Werror -I.

RM = rm -f

OBJS = $(SRC:.c=.o)

$(NAME) : $(OBJS)
		ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re