# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/02 16:59:46 by jsovat-d          #+#    #+#              #
#    Updated: 2025/11/04 10:47:46 by jsovat-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT_DIR = Libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS = 	ft_printf.c \
		ft_format_handler.c \
		ft_print_int.c \
		ft_print_str.c \
		ft_print_char.c \
		ft_print_unsigned.c \
		ft_print_lowhex.c \

OBJS = ${SRCS:.c=.o}

AR = ar rcs
RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I . -I $(LIBFT_DIR)

# -------------------- RULES -------------------- #

all: ${NAME}

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

${NAME}: ${OBJS} ${LIBFT}
	@${AR} ${NAME} ${OBJS}
	@echo "✅ $(NAME) created successfully."

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	@${RM} ${OBJS}
	@$(MAKE) -C $(LIBFT_DIR) clean
	@echo "🧹 Object files removed."

fclean: clean
	${RM} ${NAME}
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@echo "🗑️  All cleaned!"

re: fclean all

.PHONY: all clean fclean re