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

/*
#include <stdio.h>      // for printf()
#include <stddef.h>     // for NULL
#include "ft_printf.h"  // for ft_printf()

int	main(void)
{
	int		x = 42;
	int		y = -7;
	int		*ptr = &x;
	int		*null_ptr = NULL;
	unsigned int	u = 21395844;

	printf("\n========== [ REAL printf vs ft_printf ] ==========\n\n");

	// %d and %i
	printf("REAL -> Score: %d | Index: %i\n", x, y);
	ft_printf(" MINE -> Score: %d | Index: %i\n\n", x, y);

	// %s and %c
	printf("REAL -> String: %s | Single char: %c\n", "Joao Pedro", 'c');
	ft_printf(" MINE -> String: %s | Single char: %c\n\n", "Joao Pedro", 'c');

	// %u
	printf("REAL -> Unsigned: %u\n", u);
	ft_printf(" MINE -> Unsigned: %u\n\n", u);

	// %%
	printf("REAL -> percent: %%\n");
	ft_printf(" MINE -> percent: %%\n\n");

	// %x
	printf("REAL -> Hex lower: %x | %x | %x | %x\n", 0, 10, 255, 42295u);
	ft_printf(" MINE -> Hex lower: %x | %x | %x | %x\n\n", 0, 10, 255, 42295u);

	// %X
	printf("REAL -> Hex upper: %X | %X | %X | %X\n", 0, 10, 255, 42295u);
	ft_printf(" MINE -> Hex upper: %X | %X | %X | %X\n\n", 0, 10, 255, 42295u);

	// %p
	printf("REAL -> Pointer: %p | Null: %p\n", ptr, null_ptr);
	ft_printf(" MINE -> Pointer: %p | Null: %p\n\n", ptr, null_ptr);

	printf("==================================================\n\n");
	return (0);
}
*/