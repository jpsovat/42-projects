#include <unistd.h>

int	check_doubles(int pos, char *str)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == str[pos])
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		j = 0;
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				if (check_doubles(i, argv[1]) == 1)
					break;
				write(1, &argv[1][i], 1);
				break;
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
