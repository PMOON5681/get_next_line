#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*read_line;
	int		count;

	count = 0;
	fd = open("test.txt", O_RDONLY);
	if (fd == -1)
		return (1);
	while (1)
	{
		read_line = get_next_line(fd);
		if (read_line == NULL)
			break ;
		count ++;
		printf ("[%d]: %s\n", count, read_line);
		free(read_line);
	}
	close(fd);
	return (0);
}
