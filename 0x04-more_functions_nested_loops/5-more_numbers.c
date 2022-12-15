#include "main.h"

/**
 * more_numbers - prints numbers
 *
 * Description: prints numbers from 0 to 14
 * ten times
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				/* print the 1st digit */
				_putchar((j / 10) + 10);
			}
			/*print the last digit */
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}
