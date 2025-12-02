#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char	*get_next_line(int fd);

int	main(void)
{
	int		fd;
	char		*line;

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
		return (1);
	line = get_next_line(fd);
	while (line)
	{
		printf("LINE: %s\n", line);
		free(line);
		line = get_next_line(fd);
	}
	printf("EOF reached\n");
	close(fd);
	return (0);
}
