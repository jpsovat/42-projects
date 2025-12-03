/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 09:20:27 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/09/19 09:30:33 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_isascii - Checks if a character is within ascii range.
 * @c: The character to check.
 *
 * Return: 1 if c is true, 0 otherwise.
 */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
