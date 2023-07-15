#include <stdio.h>
/**
 * main - entry point to program
 * Description: 'print base 10 numbers'
 * Return: always 0
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
