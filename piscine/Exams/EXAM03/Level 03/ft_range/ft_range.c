#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*array;
	int	size;
	int	i;

	size = 0;
	if (start <= end)
		size = end - start + 1;
	else if (start > end)
		size = start - end + 1;
	array = (int *)malloc(sizeof(int) * (size));
	if (!array)
		return (0);
	i = 0;
	if (start <= end)
	{
		while (i < size)
		{
			array[i] = start;
			i++;
			start++;
		}
	}
	else if (start > end)
	{
		while (i < size)
		{
			array[i] = start;
			start--;
			i++;
		}
	}
	return (array);
}
/*
#include <stdio.h>
int	main()
{
	int	start = 1;
	int	end = 3;
	int	*array;
	int	i;

	printf("Start: %d | End: %d\n", start, end);
	array = ft_range(start, end);
	i = 0;
	while (i < (end - start + 1))
	{
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
