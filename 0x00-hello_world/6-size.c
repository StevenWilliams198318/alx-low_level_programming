#include <stdio.h>
/**
 * main - entry point to printing the size of various types
 * Description: using sizeof() to print out their memory byte size allocation
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int l1;
	long long l2;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of a int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(l1));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(l2));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
