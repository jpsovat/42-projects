/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 09:14:07 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/11/05 10:22:17 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

static int	ft_process_format(const char *format, va_list args, int *i)
{
	int	ret;

	ret = ft_format_handler(format[*i], args);
	if (ret == -1)
		return (-1);
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		ret;

	va_start(args, format);
	i = -1;
	count = 0;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			i++;
			ret = ft_process_format(format, args, &i);
			if (ret == -1)
				return (va_end(args), -1);
			count += ret;
		}
		else
			count += write(1, &format[i], 1);
	}
	va_end(args);
	return (count);
}
