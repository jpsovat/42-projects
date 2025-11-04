/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 09:14:07 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/11/04 10:48:09 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		ret;

	va_start(args, format);
	i = 0;
	count = 0;
	ret = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ret += ft_format_handler(format[i], args);
			if (ret == -1)
				return (-1);
			count += ret;
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

int	main (void)
{
	ft_printf("Score: %d | Index: %i\n", 42, -7);
	ft_printf("String: %s | Single char: %c\n", "Joao Pedro", 'c');
	ft_printf("Unsigned: %u\n", 21395844);
	ft_printf("percent: %%\n");
	ft_printf("Hex lower: %x\n", 0);			// expected 0
	ft_printf("Hex lower: %x\n", 10);			// expected a
	ft_printf("Hex lower: %x\n", 255); 			// expected ff
	ft_printf("Hex lower: %x\n", 4294967295u); 	// expected ffffffff
	return (0);
}