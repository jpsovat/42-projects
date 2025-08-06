/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <[jsovat-d@student.42porto.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 13:13:54 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/08/05 15:54:09 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		total_len += ft_strlen(sep) * (size - 1);
	return (total_len);
}

int	ft_copy_str(char *dest, char *src, int start)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[start] = src[i];
		start++;
		i++;
	}
	return (start);
}

void	ft_fill_str(char *dest, int size, char **strs, char *sep)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		k = ft_copy_str(dest, strs[i], k);
		if (i < size - 1)
			k = ft_copy_str(dest, sep, k);
		i++;
	}
	dest[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str_final;
	char	*empty;

	if (size == 0)
	{
		empty = malloc(1);
		if (!empty)
			return (0);
		empty[0] = '\0';
		return (empty);
	}
	str_final = (char *)malloc(sizeof(char)
			* (ft_total_len(size, strs, sep) + 1));
	if (!str_final)
		return (0);
	ft_fill_str(str_final, size, strs, sep);
	return (str_final);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"Hello", "world", "!"};
	char	*sep = ", ";
	int	size = 3;

	printf("Entrada: %s | %s | %s\n", strs[0], strs[1], strs[2]);
	printf("Resultado: %s\n", ft_strjoin(size, strs, sep));

	return (0);


}
*/
