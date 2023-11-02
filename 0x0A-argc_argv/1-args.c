#include <stdio.h>

/**
 * main - prints the number of args entered
 *
 * @argc: var of type int containing number of arg entered
 * @argv: a char pointer containing args entered
 * Return 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
