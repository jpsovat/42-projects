#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
	int fd = open("story.txt", O_RDONLY);
	char *line;
	int result;

	while ((result = get_next_line(fd, &line)) > 0)
	{
		printf("Line: %s\n", line);
		free(line);
	}
	if (result == 0)
		printf("End of file.\n");
	else
		printf("Error occurred.\n");

	close(fd);
	return 0;
}
