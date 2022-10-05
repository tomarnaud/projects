# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tharnaud <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 11:51:48 by tharnaud          #+#    #+#              #
#    Updated: 2022/10/05 18:19:10 by tharnaud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_bzero.c \
		ft_atoi.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \

OBJ = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ)
		ar -rc $(NAME) $(OBJ)
.c.o:
		cc $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re :	fclean $(NAME)

.PHONY: all clean fclean re
