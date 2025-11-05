# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/02 16:59:46 by jsovat-d          #+#    #+#              #
#    Updated: 2025/11/05 10:27:56 by jsovat-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT_DIR = Libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS =	ft_printf.c \
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
AR = ar rcs
RM = rm -f
INCLUDE = -I . -I $(LIBFT_DIR)

# -------------------- RULES -------------------- #

all: $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT)
	@cp $(LIBFT) $(NAME)
	@ar x $(LIBFT)                   # extract all .o files from libft.a
	@$(AR) $(NAME) $(OBJS) *.o       # merge ft_printf .o and libft .o
	@$(RM) *.o                       # clean extracted files
	@echo "✅ $(NAME) created successfully at project root."

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	@$(RM) $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean
	@echo "🧹 Object files removed."

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@echo "🗑️  All cleaned!"

re: fclean all

.PHONY: all clean fclean re