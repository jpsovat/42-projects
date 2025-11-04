/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_handler.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:30:42 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/11/04 08:29:52 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format_handler(char c, va_list args)
{
	if (c == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	else if (c == 'd' || c == 'i')
		return (ft_print_int(args));
	else if (c == 'u')
		return (ft_print_unsigned(args));
	else if (c == 's')
		return (ft_print_str(args));
	else if (c == 'c')
		return (ft_print_char(args));
	return (0);
}
