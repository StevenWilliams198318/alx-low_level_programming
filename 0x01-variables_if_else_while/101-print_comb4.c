#include <stdio.h>
/**
 * main - entry point
 * Description: 'printing two digit numbers 01 - 99'
 * Return: always 0
 */
int main(void)
{
	int n = 0;
	/* betty again*/
	while (n <= 99)
	{
		printf("%03d", n);
		if (n != 99)
		{
			printf(", ");
		}
		n++;
	}
	printf("\n");
	return (0);
}
