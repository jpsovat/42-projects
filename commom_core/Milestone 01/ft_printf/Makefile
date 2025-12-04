# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/02 16:59:46 by jsovat-d          #+#    #+#              #
#    Updated: 2025/12/04 09:37:53 by jsovat-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
		ft_format_handler.c \
		ft_print_int.c \
		ft_print_str.c \
		ft_print_char.c \
		ft_print_unsigned.c \
		ft_print_lowhex.c \
		ft_print_upperhex.c \
		ft_print_ptr.c

OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I .
RM = rm -f

LIBFT_DIR = Libft
LIBFT = $(LIBFT_DIR)/libft.a
MAKE_LIBFT = make -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS)
	$(MAKE_LIBFT) all
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(MAKE_LIBFT) clean
	$(RM) $(OBJS)

fclean: clean
	$(MAKE_LIBFT) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
