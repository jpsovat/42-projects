/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 13:34:45 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/28 15:12:04 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_is_valid(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0')
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i +1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	write_nbr(unsigned int nbr, char *base, unsigned int base_len)
{
	char	c;

	if (nbr >= base_len)
		write_nbr(nbr / base_len, base, base_len);
	c = base[nbr % base_len];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	n;
	unsigned int	base_len;

	if (base_is_valid(base) == 0)
		return ;
	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	if (nbr < 0)
	{
		write(1, "-", 1);
		n = (unsigned int)(-nbr);
	}
	else
		n = nbr;
	write_nbr(n, base, base_len);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Decimal 42 (base 10): ");
	fflush(stdout);
	ft_putnbr_base(42, "0123456789");
	printf("\n");

	printf("Decimal 42 (binário): ");
	fflush(stdout);
	ft_putnbr_base(42, "01");
	printf("\n");

	printf("Decimal 42 (hexadecimal): ");
	fflush(stdout);
	ft_putnbr_base(42, "0123456789ABCDEF");
	printf("\n");

	printf("Decimal 42 (poneyvif): ");
	fflush(stdout);
	ft_putnbr_base(42, "poneyvif");
	printf("\n");

	printf("Negativo -13 (decimal): ");
	fflush(stdout);
	ft_putnbr_base(-13, "0123456789");
	printf("\n");

	printf("Negativo -13 (hexadecimal): ");
	fflush(stdout);
	ft_putnbr_base(-13, "0123456789ABCDEF");
	printf("\n");

	printf("Base inválida ('+'): ");
	fflush(stdout);
	ft_putnbr_base(13, "01+"); // não deve imprimir nada
	printf("\n");

	printf("Decimal 13 Minha base (Joao Pedro): ");
	fflush(stdout);
	ft_putnbr_base(13, "JoaoPedro42");
	printf("\n");

	return (0);
}
*/
