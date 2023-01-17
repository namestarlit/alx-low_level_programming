#include "dog.h"
#include <stdlib.h>

/**
 * new_dog -creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog owner's name
 *
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogs;
	int i, NL, OL;

	dogs = (dog_t *)malloc(sizeof(dog_t));
	if (dogs == NULL; !(name) || !(owner))
	{
		free(dogs);
		return (NULL);
	}
	/* gets name length */
	for (NL = 0; name[NL]; NL++)
		;
	dogs->name = (dog_t *)malloc(NL + 1);

	/* gets owner's name length */
	for (OL = 0; owner[OL]; OL++)
		;
	dogs->owner = (dog_t *)malloc(OL + 1);

	if (!(dogs->name) || !(dogs->owner))
	{
		free(dogs->name);
		free(dogs->owner);
		free(dogs);
		return (NULL);
	}

	/* copies a dog's name */
	for (i = 0; i < NL; i++)
		dogs->name[i] = name[i];
	dogs->name[i] = '\0';

	dogs->age = age;

	/* copies dog owner's name */
	for (i = 0; i < OL; i++)
		dogs->owner[i] = owner[i];
	dogs->owner[i] = '\0';

	return (dogs);
}
