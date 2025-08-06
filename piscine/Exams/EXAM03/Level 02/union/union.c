#include <unistd.h>

int	ft_check_doubles(int pos, char *str)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[pos] == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_doubles_2(int pos, char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i])
	{
		if (str2[pos] == str1[i])
			return (1);
		i++;
	}
	return (0);
}

int	main (int argc, char **argv)
{
	int	i;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		if (ft_check_doubles(i, argv[1]) == 1)
			i++;
		else
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	i = 0;
	while (argv[2][i])
	{
		if (ft_check_doubles(i, argv[2]) == 1)
			i++;
		else
		{
			if (ft_check_doubles_2(i, argv[1], argv[2]) == 1)
				i++;
			else
			{
				write(1, &argv[2][i], 1);
				i++;
			}	
		}
	}
	write(1, "\n", 1);
	return (0);
}
