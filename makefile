#$(VERBOSE).SILENT:

NAME		=	so_long
CC			=	cc
CFLAGS		=	-Wall -Werror -Wall 
RM			=	rm -f
MKD			=	mkdir
MLXFLAGS	=	-Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz
MLX_LINUX	=	-I/usr/include -Imlx_linux -O3

SRC_NAME	=	so_long.c \
				main.c

SRC		=	$(addprefix $(SRC_PATH)/, $(SRC_NAME))
OBJ		=	$(patsubst $(SRC_PATH)/%.c, $(OBJ_PATH)/%.o, $(SRC))
DEPS	=	./Libft/libft.a ./Printf/libftprintf.a ./Gnl/get_next_line.a

SRC_PATH = ./src
OBJ_PATH = ./objects

all: $(NAME)

$(OBJ_PATH)/%.o : $(SRC_PATH)/%.c
	$(CC) $(CFLAGS) $(MLX_LINUX) -c $< -o $@
$(NAME): $(DEPS) $(OBJ_PATH) $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) $(DEPS) $(MLXFLAGS) -o $(NAME)

LIBFT_PATH	= ./Libft
./Libft/libft.a: $(shell make -C $(LIBFT_PATH) -q libft.a)
	make -C $(LIBFT_PATH)

LIBPF_PATH	= ./Printf
./Printf/libftprintf.a: $(shell make -C $(LIBPF_PATH) -q libftprintf.a)
	make -C $(LIBPF_PATH)

GET_PATH	= ./Gnl
./Gnl/get_next_line.a: $(shell make -C $(GET_PATH) -q get_next_line.a)
	make -C $(GET_PATH)

$(OBJ_PATH):
	$(MKD) -p objects

clean:
	make clean -C $(LIBFT_PATH)
	make clean -C $(LIBPF_PATH)
	make clean -C $(GET_PATH)
	$(RM) -r $(OBJ_PATH)

fclean: clean
		make fclean -C $(LIBFT_PATH)
		make fclean -C $(LIBPF_PATH)
		make fclean -C $(GET_PATH)
		$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re force