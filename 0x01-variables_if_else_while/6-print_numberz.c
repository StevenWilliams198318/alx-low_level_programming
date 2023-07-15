#include <stdio.h>
/**
 * main - entry point to program
 * Description: 'print base 10 numbers using ASCII table'
 * Return: always 0
 */
int main(void)
{
	int n = 4;
	/*Betty wants a space, but complaints when one is there*/
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
