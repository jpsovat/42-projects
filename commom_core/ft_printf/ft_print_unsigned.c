/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:15:10 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/11/04 09:17:32 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_numlen(unsigned int nb)
{
	size_t	len;

	if (nb == 0)
		return (1);
	len = 0;
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int u)
{
	char	*str;
	int		len;

	len = ft_numlen(u);
	str = (char *)malloc(sizeof (char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		str[len] = u % 10 + '0';
		u /= 10;
		len--;
	}
	return (str);
}

int	ft_print_unsigned(va_list args)
{
	unsigned int	u;
	char			*str;
	int				count;

	u = va_arg(args, unsigned int);
	str = ft_uitoa(u);
	write(1, str, ft_strlen(str));
	count = ft_strlen(str);
	free(str);
	return (count);
}
