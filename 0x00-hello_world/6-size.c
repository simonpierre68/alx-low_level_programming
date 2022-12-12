
#include <stdio.h>


/**
 * main - prints the size of various type based on
 * the computer it is complired and run on ..
 * return: Always 0.
 */

int main(void)
{
	printf("size of char: %zu byte(s)\n", sizeof(char));

	printf("size if int: %zu byte(s)\n", sizeof(int));
	printf("size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float: %zubyte(s)\n", sizeof(float));
	return (0);
}

