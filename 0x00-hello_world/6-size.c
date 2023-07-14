#include <stdio.h>
/**
 * main - entry point to printing the size of various types
 * Description: using sizeof() to print out their memory byte size allocation
 * Return: 0
 */
#include <stdio.h>

print_size_of_type(void)
{
	printf("size of a (char) = %d\n", sizeof(char));
	printf("size of a (int) = %d\n", sizeof(int));
	printf("size of a (float) = %d\n", sizeof(float));
	printf("size of a (double) + %d\n", sizeof(double));
}
int main(void)
{
	print_size_of_type();
	return (0);
}
