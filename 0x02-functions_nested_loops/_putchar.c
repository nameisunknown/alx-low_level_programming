#include <unistd.h>

/**
 * _putchar - Function that writes an input to stdout
 *
 * Return: Always 0 (success)
 */

int _putchar(char characterCollected)
{
	int filedescript = 1;

	char* bufferContainingData = &characterCollected;

	int numberOfByteToBeWritten = 1;

	return (write(filedescript, bufferContainingData, numberOfByteToBeWritten));
}
