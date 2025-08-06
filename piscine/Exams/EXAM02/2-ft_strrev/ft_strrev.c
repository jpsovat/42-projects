/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <[jsovat-d@student.42porto.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:00:22 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/08/01 10:21:10 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	k;

	k = 0;
	while (str[k])
		k++;
	return (k);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	temp;

	i = ft_strlen(str) - 1;
	j = 0;
	while (i > j)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		i--;
		j++;
	}
	return (str);
}
#include <stdio.h>
int	main(int argc, char ** argv)
{
	(void)argc;
	printf("%s\n", argv[1]);
	printf("%s\n", ft_strrev(argv[1]));

	return (0);

}
