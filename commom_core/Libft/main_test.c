#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("isalpha('A') = %d\n", ft_isalpha('A')); // esperado 1
	printf("isalpha('z') = %d\n", ft_isalpha('z')); // esperado 1
	printf("isdigit('1') = %d\n", ft_isdigit('1')); // esperado 1
	printf("isdigit('@') = %d\n", ft_isdigit('@')); // esperado 0
	printf("isalnum('A') = %d\n", ft_isalnum('A')); // esperado 1
	printf("isalnum('3') = %d\n", ft_isalnum('3')); // esperado 1
	printf("isascii(127) = %d\n", ft_isascii(127)); // esperado 1
	printf("isascii(128) = %d\n", ft_isascii(128)); // esperado 0	
	printf("isprint('a') = %d\n", ft_isprint('a')); // esperado 1
	printf("isprint(127) = %d\n", ft_isprint(127)); // esperado 0
	return (0);
}