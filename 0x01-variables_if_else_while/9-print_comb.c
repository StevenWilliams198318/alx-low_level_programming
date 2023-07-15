#include <stdio.h>
/**
 * main - entry point
 * Description:'printing out single digit-numbers'
 * Return: always 0
 */
int main(void)
{
	int n;
	int com = ',';
	int spac = ' ';

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(com);
		putchar(spac);
	}
	putchar('\n');
	return (0);
}
