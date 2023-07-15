#include <stdio.h>
/**
 * main - entry point
 * Description: 'printing two digit numbers 01 - 99'
 * Return: always 0
 */
int main(void)
{
	for (int i = 0; i <= 99; i++)
	{
		printf("%02d", i);
		if (i != 99)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
