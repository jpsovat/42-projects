/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lowhex.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:22:05 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/11/04 10:47:41 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned int n, unsigned int base_len)
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

static char	*ft_uitoa_hex(unsigned int nbr)
{
	char			*base;
	unsigned int	base_len;
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

int	ft_print_lowhex(va_list args)
{
	unsigned int	x;
	char			*str;
	int				count;

	x = va_arg(args, unsigned int);
	str = ft_uitoa_hex(x);
	if (!str)
		return (-1);
	write(1, str, ft_strlen(str));
	count = ft_strlen(str);
	free(str);
	return (count);
}
