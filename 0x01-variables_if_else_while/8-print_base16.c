#include <stdio.h>
/**
 * main - entry point
 * Description: 'printing base 16 number in lowercase'
 * Return: always 0
 */
int main(void)
{
	int n = 0x30;
	int a = 0x61;

	while (n <= 0x39)
	{
		putchar(n);
		n++;
	}
	while (a <= 0x66)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
