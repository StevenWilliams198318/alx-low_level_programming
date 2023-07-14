#include <stdio.h>
/**
 * main - entry point to printing the size of various types
 * Description: using sizeof() to print out their memory byte size allocation
 * Return: 0
 */
#include <stdio.h>

print_size_of_type(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of a int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of a float: %d byte(s)\n",sizeof(float));
}
int main(void)
{
	print_size_of_type();
	return (0);
}
