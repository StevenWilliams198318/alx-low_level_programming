#include <stdio.h>
/**
 * main - entry point to program
 * Description: 'printing lowercase & uppercase alphabet'
 * Return: always 0
 */
int main(void)
{
	int n = 97;
	int a = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (a <= 90)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
