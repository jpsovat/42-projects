/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:43:41 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/10/16 09:54:21 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *start, size_t n)
{
	size_t	i;
	unsigned char	*ptr;

	ptr = (unsigned char *)start;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}