/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 07:57:19 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/11/03 21:07:33 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_numlen(long nb)
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

char	*ft_itoa(int n)
{
	long	nb;
	int		neg;
	size_t	digits;
	char	*str;

	nb = (long)n;
	neg = (nb < 0);
	if (neg)
		nb = -nb;
	digits = ft_numlen(nb);
	if (n == 0)
		return (ft_strdup("0"));
	str = (char *)malloc(sizeof (char) * (digits + neg + 1));
	if (!str)
		return (NULL);
	str[digits + neg] = '\0';
	while (digits > 0)
	{
		str[digits + neg - 1] = (nb % 10) + '0';
		nb /= 10;
		digits--;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
