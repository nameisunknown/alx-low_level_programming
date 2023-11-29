#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int filedescriptor;

	if (filename == NULL)
		return (-1);
	
	filedescriptor = open(filename, O_WRONLY | O_CREAT | O_EXCL, 0600);

	if (filedescriptor != -1)
	{
		if (write(filedescriptor, text_content, strlen(text_content)) == -1)
		{
			close(filedescriptor);
			return (-1);
		}
	}
	else
	{
		truncate(filename, 0);
		return (-1);
	}
	close(filedescriptor);
	return (1);
}
