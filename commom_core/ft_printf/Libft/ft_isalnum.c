/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 09:05:35 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/09/19 09:21:08 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_isalnum - Checks if a character is an alphanumeric.
 * @c: The character to check.
 *
 * Return: 1 if c is an alphanum, 0 otherwise.
 */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
