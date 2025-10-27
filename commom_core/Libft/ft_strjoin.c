/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:14:07 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/10/27 15:45:14 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*strjoin;
	size_t	i;

	if	(!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	strjoin = malloc(sizeof(char) * (len1 + len2 + 1));
		if (!strjoin)
			return (NULL);
	i = 0;
	while (i < len1)
	{
		strjoin[i] = s1[i];
		i++;
	}
	while (i < (len1 + len2))
	{
		strjoin[i] = s2[i - len1];
		i++;
	}
	strjoin[i] = '\0';
	return (strjoin);
}
