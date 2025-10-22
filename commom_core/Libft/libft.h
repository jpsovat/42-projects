/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:25:04 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/10/22 15:19:17 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Esse padrão se chama include guard. Ele evita que o mesmo header
seja incluído mais de uma vez no mesmo programa.
*/

#ifndef LIBFT_H				// se LIBFT_H ainda não foi definido
# define LIBFT_H			// define LIBFT_H

int		ft_isalpha(int c);
int 	ft_isdigit(int c);
int 	ft_isalnum(int c);
int 	ft_isascii(int c);
int 	ft_isprint(int c);
int		ft_strlen(char *str);
void	*ft_memset(void *start, int c, size_t n);
void	ft_bzero(void *start, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif	
