#include "main.h"

/**
 * cap_string - capitalizes each first letter of word string
 * @s: string pointer
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int i = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + i) >= 97 && *(s + i) <= 122)
		*(s + i) = *(s + i) - 32;
	i++;
	while (*(s + i) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + i) == sep_words[i])
			{
				if ((*(s + (i + 1)) >= 97) && (*(s + (i + 1)) <= 122))
					*(s + (i + 1)) = *(s + (i + 1)) - 32;
				break;
			}
		}
		i++;
	}
	return (s);
}
