# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bjaparid <bjaparid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/26 15:05:56 by bjaparid          #+#    #+#              #
#    Updated: 2025/03/29 14:13:41 by bjaparid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra 
NAME = ft_libft.a
SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c \
		ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_itoa.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c \
		ft_striteri.c
OBJECTS = $(SOURCES:%.c=%.o)

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SOURCES) -I./
	ar rc ${NAME} ${OBJECTS}
	ranlib $(NAME)
clean:
	rm -rf $(OBJECTS)
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
