# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/18 11:41:30 by jsovat-d          #+#    #+#              #
#    Updated: 2025/09/19 09:33:25 by jsovat-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ---- Libft basic ----

# regra principal: constrói a biblioteca
all: libft.a

# a libft.a depende dos objetos:
# cria a biblioteca estática libft.a, que depende das funções "ft_"
libft.a: ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o
	ar rcs libft.a ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o

# compila ft_isalpha.c e libft.h, gerando ft_isalpha.o
ft_isalpha.o: ft_isalpha.c libft.h
	gcc -c -Wall -Wextra -Werror ft_isalpha.c

# compila ft_isdigit.c e libft.h, gerando ft_isdigit.o
ft_isdigit.o: ft_isdigit.c libft.h
	gcc -c -Wall -Wextra -Werror ft_isdigit.c

# compila ft_isalnum.c e libft.h, gerando ft_isalnum.o
ft_isalnum.o: ft_isalnum.c libft.h
	gcc -c -Wall -Wextra -Werror ft_isalnum.c

# compila ft_isascii.c e libft.h, gerando ft_isascii.o
ft_isascii.o: ft_isascii.c libft.h
	gcc -c -Wall -Wextra -Werror ft_isascii.c

# compila ft_isprint.c e libft.h, gerando ft_isprint.o
ft_isprint.o: ft_isprint.c libft.h
	gcc -c -Wall -Wextra -Werror ft_isprint.c

# remove todos os arquivos objeto gerados
clean:
	rm -f *.o

# remove a biblioteca
fclean: clean
	rm -f libft.a

# recompila tudo do zero
re: fclean all