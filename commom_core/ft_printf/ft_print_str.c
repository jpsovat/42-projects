/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:30:05 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/11/02 16:52:03 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(va_list args)
{
	char	*str;
	int		count;

	str = va_arg(args, char *);
	if (!str)
		str = "(null)";
	write(1, str, ft_strlen(str));
	count = ft_strlen(str);
	return (count);
}
