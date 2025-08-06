#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return(0);
	}
	
	j = 0;
	while (argv[1][j] != '\0')
	{
		write(1, &argv[1][j], 1);
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
