#include <unistd.h>
/*
int	main(void)
{
	write(1,"aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return (0);
}
*/
int	main(void)
{
	char	letter;
	int	pos;
	char	temp;

	pos = 1;
	letter = 'a';
	while (letter <= 'z')
	{
		if (pos % 2 != 0)
			write (1, &letter, 1);
		else
		{
			temp = letter - 32;
			write(1, &temp, 1);
		}
		letter++;
		pos++;
	}
	write(1, "\n", 1);
	return (0);
}
