# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/18 11:41:30 by jsovat-d          #+#    #+#              #
#    Updated: 2025/10/28 12:14:35 by jsovat-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PART1 = ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalnum.c \
		ft_isdigit.c ft_isalpha.c ft_atoi.c ft_strlen.c ft_strlcat.c \
		ft_strncmp.c ft_strdup.c ft_calloc.c ft_memcpy.c ft_strchr.c \
		ft_strrchr.c ft_strnstr.c ft_bzero.c ft_memchr.c ft_memcmp.c \
		ft_memset.c ft_memmove.c ft_strlcpy.c

PART2 = ft_itoa.c ft_strjoin.c ft_split.c ft_striteri.c ft_strmapi.c \
		ft_substr.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c

SRC = ${PART1} ${PART2}
OBJ = ${SRC:.c=.o}

AR = ar rcs
RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I .

.o:.c
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
	${AR} ${NAME} ${OBJ}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re