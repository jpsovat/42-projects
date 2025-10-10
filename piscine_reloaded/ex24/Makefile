# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/10 07:43:56 by jsovat-d          #+#    #+#              #
#    Updated: 2025/10/10 08:09:37 by jsovat-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ------------------- Variables -------------------

NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I includes
SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS	= $(SRCS:.c=.o)

# ------------------- Rules -------------------

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all