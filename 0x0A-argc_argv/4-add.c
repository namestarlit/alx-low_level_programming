#include "main.h"

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 (success), 1 (not a digit)
 */
int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i][0] >= '0' && argv[i][0] <= '9')
			{
				if (*argv[i] != '\0')
					sum += atoi(argv[i]);
			}
			else
			{
				puts("Error");
				return (1);
				break;
			}
		}
	}
	printf("%d\n", sum);

	return (0);
}
