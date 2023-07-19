#include "main.c"

/**
 * main - Entry Point to program
 * print_alphabet_x10 - print lowercase alphabet x10
 * folloed by new line
 * Return: always 0
 */
void print_alphabet_x10(void);
{
	char ch;
	int i;

	i = 0;
	ch = 'a';
	while (i < 10)
	{
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
