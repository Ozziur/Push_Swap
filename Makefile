# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/01 16:33:08 by mruizzo           #+#    #+#              #
#    Updated: 2022/04/29 18:46:20 by mruizzo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror 

NAME = push_swap
SRC = main.c utils.c min_max.c order_utils.c order.c sort.c array_utils.c lis.c move_one.c move_two.c move_three.c basic.c

LIBFT_A = libft.a
LIBFT_DIR = libft/
LIBFT = $(addprefix $(LIBFT_DIR), $(LIBFT_A))

OBJ = $(SRC:.c=.o)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	make -C $(LIBFT_DIR)
	$(CC) $(FLAGS) $(OBJ) $(LIBFT) -o $(NAME)

all: $(NAME)

bonus:

clean:
	rm -rf $(OBJ) $(B_OBJ)
	make clean -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT_DIR)

re: fclean all
