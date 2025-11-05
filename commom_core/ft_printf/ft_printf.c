/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 09:14:07 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/11/05 09:06:19 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
int	main (void)
{
	int x = 42;
	int *ptr = &x;
	int *null_ptr = NULL;
	
	ft_printf("Score: %d | Index: %i\n", 42, -7);
	ft_printf("String: %s | Single char: %c\n", "Joao Pedro", 'c');
	ft_printf("Unsigned: %u\n", 21395844);
	ft_printf("percent: %%\n");
	ft_printf("Hex lower: %x\n", 0);			// expected 0
	ft_printf("Hex lower: %x\n", 10);			// expected a
	ft_printf("Hex lower: %x\n", 255); 			// expected ff
	ft_printf("Hex lower: %x\n", 4294967295u); 	// expected ffffffff
	ft_printf("Hex upper: %X\n", 0);			// expected 0
	ft_printf("Hex upper: %X\n", 10);			// expected A
	ft_printf("Hex upper: %X\n", 255); 			// expected FF
	ft_printf("Hex upper: %X\n", 4294967295u); 	// expected FFFFFFFF
	ft_printf("Pointer: %p\n", ptr);
	ft_printf("Null pointer: %p\n", null_ptr);
	return (0);
}
*/