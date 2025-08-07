#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			n = (argv[1][i] - 96);
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			n = (argv[1][i] - 64);
		else
			n = 1;
		while (n > 0)
		{
			write(1, &argv[1][i], 1);
			n--;
		}
		i++;
	}
		write(1, "\n", 1);
		return(0);
}
