/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:34:43 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/10/22 16:13:09 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	j = 0;
	while (j < len && big[j])
	{
		i = 0;
		while (big[j + i] == little[i] && little[i] && j + i < len)
			i++;
		if (little[i] == '\0')
			return ((char *)&big[j]);
		j++;
	}
	return (NULL);
}
