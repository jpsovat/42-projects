#include <stdio.h>
#include <stdlib.h>  // para atoi

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	result = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	const char *testes[] = {
		"42",
		"   -42",
		"  +00123abc",
		"0",
		"999999",
		"-2147483648",
		"2147483647",
		"   +0",
		"  - 42",     // inválido para atoi
		"abc",        // inválido para atoi
		NULL
	};

	int i = 0;
	while (testes[i])
	{
		printf("Test \"%s\"\n", testes[i]);
		printf("ft_atoi   = %d\n", ft_atoi(testes[i]));
		printf("   atoi   = %d\n", atoi(testes[i]));
		printf("--------------------\n");
		i++;
	}

	return (0);
}
