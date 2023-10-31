#include <stdio.h>

/**
 * main - solve me
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)  
{
	*cc = 'o';
	ccc = 'l';
	printf("first value of ccc is %c\n", ccc);
}


int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("This is the first time %c", c);
	modif_my_char_var(p, c);
	printf("This is second version of c: %c\n", c);
	return (0);
}
