#include <stdio.h>
#include <stdlib.h>

/**
 * char *_strcat - concatenates 2 strings
 *
 * Returns: Pointer to dest
 */

int lenofstring(char *dest)
{
	int counter = 0;

	while (*(dest + counter) != '\0')
	{
		counter++;
	}
	return (counter);
}
char *_strcat(char *dest, char *src)
{
	int arg1len = lenofstring(dest);

	int arg2len = lenofstring(src);

	int runloopfor = arg1len + arg2len + 2;

	int counter = 0;

	char *result = (char *)malloc(runloopfor);

	while (counter <= runloopfor)
	{

		if (counter >= arg1len)
		{
			*(result + counter) = *(src + (counter - arg1len));
		}
		else
		{
			*(result + counter) = *(dest + counter);
		}
		counter++;
	}
	result[counter] = '\0';
	printf("%s", result);
	return (result);
}
int main(void)
{
	_strcat("Hello ", "Son");
}
