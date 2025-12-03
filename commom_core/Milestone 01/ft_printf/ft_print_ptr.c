/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:57:35 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/11/05 10:08:28 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned long n, unsigned long base_len)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n > 0)
	{
		n /= base_len;
		len++;
	}
	return (len);
}

static char	*ft_ultoa_hex(unsigned long nbr)
{
	char			*base;
	unsigned long	base_len;
	char			*str;
	int				len;

	base = "0123456789abcdef";
	base_len = ft_strlen(base);
	len = ft_len(nbr, base_len);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	while (nbr > 0)
	{
		str[--len] = base[nbr % base_len];
		nbr /= base_len;
	}
	return (str);
}

int	ft_print_ptr(va_list args)
{
	void			*ptr;
	unsigned long	addr;
	char			*str;
	int				count;

	ptr = va_arg(args, void *);
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	addr = (unsigned long)ptr;
	str = ft_ultoa_hex(addr);
	if (!str)
		return (-1);
	write(1, "0x", 2);
	write(1, str, ft_strlen(str));
	count = ft_strlen(str) + 2;
	free(str);
	return (count);
}
