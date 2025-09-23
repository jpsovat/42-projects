/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:25:04 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/09/19 09:33:27 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Esse padrão se chama include guard. Ele evita que o mesmo header
seja incluído mais de uma vez no mesmo programa.
*/

#ifndef LIBFT_H				// se LIBFT_H ainda não foi definido
# define LIBFT_H			// define LIBFT_H

int	ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);

#endif	
