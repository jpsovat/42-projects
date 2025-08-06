#include <unistd.h>

int	main(void)
{
	char	letter;
	int	pos;

	letter = 'z';
	pos = 1;
	while (letter >= 'a')
	{
		if (pos % 2 == 0)
		{
			char	upper;

			upper = letter - 32;
			write(1, &upper, 1);
		}
		else
		{
		write(1, &letter, 1);
		}
		letter--;
		pos--;
	}
	write(1, "\n", 1);
	return (0);
}
