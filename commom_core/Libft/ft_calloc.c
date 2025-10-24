/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 07:11:27 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/10/24 08:36:10 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_bytes;
	void	*ptr;

	// 🧩 Step 1: Handle the 0 case (must still allocate)
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}

	// 🧮 Step 2: Prevent overflow before multiplying
	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);

	total_bytes = count * size;

	// 🧱 Step 3: Allocate memory
	ptr = malloc(total_bytes);
	if (!ptr)
		return (NULL);

	// 🧼 Step 4: Initialize memory to 0
	ft_bzero(ptr, total_bytes);

	return (ptr);
}
