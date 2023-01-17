#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @struct dog - contains dog's info
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %d\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}

