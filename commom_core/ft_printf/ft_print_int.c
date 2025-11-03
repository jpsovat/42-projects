/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:28:56 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/11/03 13:10:26 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(va_list args)
{
	int		n;
	char	*str;
	int		count;

	n = va_arg(args, int);
	str = ft_itoa(n);
	if (!str)
		return (-1);
	write(1, str, ft_strlen(str));
	count = ft_strlen(str);
	free(str);
	return (count);
}
