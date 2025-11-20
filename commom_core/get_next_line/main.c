#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int	get_next_line(int fd, char **line);

int	main(void)
{
	int		fd;
	int		status;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
		return (1);
	while ((status = get_next_line(fd, &line)) > 0)
	{
		printf("LINE: %s\n", line);
		free(line);
	}
	if (status == -1)
		printf("Error\n");
	else
		printf("EOF reached\n");
	close(fd);
	return (0);
}
