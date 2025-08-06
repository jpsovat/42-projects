#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int a = 0;
	int b = 2;

	ft_swap(&a, &b);
	write(1, &a, 1);
	write(1, &b, 1);
	return (0);
}
