int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	i = 0;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10 ) + (str[i] - 48);
		i++;
	}
	return (result * sign);
}

#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char	str[] = "  	-1234abcd";
	char	str1[] = "  	+1234abcd";
	char	str2[] = "  	+-1234abcd";
	char	str3[] = "  	ad1234abcd";

	printf("string: %s\n", str);
	printf("atoi: %d\n", atoi(str));
	printf("ft_toi: %d\n", ft_atoi(str));

 	printf("string: %s\n", str1);
	printf("atoi: %d\n", atoi(str1));
	printf("ft_toi: %d\n", ft_atoi(str1));

	printf("string: %s\n", str2);
	printf("atoi: %d\n", atoi(str2));
	printf("ft_toi: %d\n", ft_atoi(str2));

	printf("string: %s\n", str3);
	printf("atoi: %d\n", atoi(str3));
	printf("ft_toi: %d\n", ft_atoi(str3));
	
	return(0);
}
