#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*buffer;

	if(fd < 0)
		return (NULL);
	buffer = malloc(BUFFER_SIZE);

}