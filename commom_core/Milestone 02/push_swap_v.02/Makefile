# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/09 11:00:46 by jsovat-d          #+#    #+#              #
#    Updated: 2026/02/09 11:32:22 by jsovat-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCS	= 0.0_main.c \
		  1.0_init_stack_a.c \
		  1.a_parse_args.c \
		  1.b_check_input.c \
		  2.0_is_sorted.c \
		  3.0_indexing.c \
		  4.0_run_sort.c \
		  4.a_sort_two.c \
		  4.b_sort_three.c \
		  4.c_sort_four_five.c \
		  4.d_sort_big.c \
		  ft_split.c \
		  ft_substr.c \
		  operations_push.c \
		  operations_reverse_rotate.c \
		  operations_rotate.c \
		  operations_swap.c \
		  utils_frees.c \
		  utils_stack.c \


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
