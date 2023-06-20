NAME = get_next_line.a

SRC =	get_next_line.c \
		get_next_line_utils.c

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