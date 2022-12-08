/* C program to print size of data types */

#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	printf("The size of integer data type is %lu\n", sizeof(int));
	printf("The size of charcter data type is %lu\n", sizeof(char));
	printf("The size of float data type is %lu\n", sizeof(float));
	printf("The sizeo of double data type is %lu\n", sizeof(double));

	return (0);
}
