#include <stdio.h>
/**
 * main - entry point
 * Description: 'printing two digit numbers 01 - 99'
 * Return: always 0
 */
int main(void)
{
	for (int n = 0; n <= 99; n++)
	{
		printf("%02d", n);
		if (n != 99)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
