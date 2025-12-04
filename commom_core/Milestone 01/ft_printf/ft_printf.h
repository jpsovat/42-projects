/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:42:38 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/11/05 08:22:45 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "Libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_format_handler(char c, va_list args);
int	ft_print_int(va_list args);
int	ft_print_str(va_list args);
int	ft_print_char(va_list args);
int	ft_print_unsigned(va_list args);
int	ft_print_lowhex(va_list args);
int	ft_print_upperhex(va_list args);
int	ft_print_ptr(va_list args);

#endif
