#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedesc;

	size_t collector, count = 0;

	char *str;

	if (filename == NULL)
		return (0);

	filedesc = open(filename, O_RDONLY);

	if (filedesc == -1)
	{
		return (0);
	}

	str = malloc(sizeof(char) * letters);

	while (count < letters)
	{
		collector = read(filedesc, str, letters);
		count++;
	}
	if (str != NULL)
	{
		write(STDOUT_FILENO, str, letters);
	}
	free(str);
	close(filedesc);
	return (collector);
}
