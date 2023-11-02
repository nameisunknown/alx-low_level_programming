#include <stdio.h>

/**
 * main - prints the name of the program
 *
 * @argc: an int variable containing the count of cmd line arg
 * @argv: a char pointer pointer to the address of arguments entered
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return 0;
}
