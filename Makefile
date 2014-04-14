# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abrault <abrault@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/04/14 11:17:08 by abrault           #+#    #+#              #
#    Updated: 2014/04/14 18:37:09 by abrault          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = src/ft_bzero.c \
	  src/ft_memset.c \
	  src/ft_tolower.c \
	  src/ft_toupper.c \
	  src/ft_atoi.c \
	  src/ft_strcat.c \
	  src/ft_strcmp.c \
	  src/ft_strlen.c \
	  src/ft_strstr.c \
	  src/ft_strncmp.c \
	  src/ft_isprint.c \
	  src/ft_isascii.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	gcc -c $(CFLAGS) -I./includes/ $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
