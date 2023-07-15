#include <stdio.h>
/**
 * main - entry point to program
 * Description: 'print lowercase alphabet in reverse'
 * Return: always 0
 */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
