# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/23 00:00:00 by jsovat-d          #+#    #+#              #
#    Updated: 2026/01/23 16:55:45 by jsovat-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= main.c \
		  init_stack.c \
		  parse_args.c \
		  free_tokens.c \
		  validate.c \
		  ft_atol_safe.c \
		  duplicates.c \
		  ft_split.c \
		  ft_substr.c \
		  stack_utils.c \
		  operations_push.c \
		  operations_swap.c \
		  operations_rotate.c \
		  operations_reverse_rotate.c \
		  sort_three.c \
		  sort_five.c \
		  sort_utils.c \
		  index.c \
		  radix.c

OBJS	= $(SRCS:.c=.o)

# ================================ RULES ==================================== #

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
