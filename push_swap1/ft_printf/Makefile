# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/17 18:21:15 by bjaparid          #+#    #+#              #
#    Updated: 2025/03/29 14:42:51 by bjaparid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Werror -Wall -Wextra -I$(Include)
NAME = printf.a
SRC = srcs/ft_printf.c srcs/ft_putchar.c srcs/ft_putnbr.c srcs/ft_putstr.c \
	  srcs/ft_putnbr_base.c srcs/ft_putnbru.c srcs/ft_printptr.c \
	  srcs/ft_putnbrbaseptr.c
OBJ = $(SRC:.c=.o)
Include  = header/

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
srcs/%.o:srcs/%.c
	$(CC) $(CFLAGS) -I$(Include) -c $< -o $@ 

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re