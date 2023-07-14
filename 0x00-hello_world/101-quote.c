#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point to print a qoute
 * Description: using <unistd.h>, and write()
 * Return: Always return 1 (successful)
 */
int main(void)
{
	int i = STDERR_FILENO;

	write(i,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", strlen(msg));
	return (1);
}
