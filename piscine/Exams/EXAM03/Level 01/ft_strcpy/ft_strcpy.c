char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char	src[] = "joao";
	char	dest[5];

	ft_strcpy(dest, src);

	printf("Origem: %s\n", src);
	printf("Destino: %s\n", dest);
}
