#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	dog_t *new_dog;

	new_dog = (dot_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = (char *)malloc(sizeof(name));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name. name);

	new_dog->age = age;

	new_dog->owner = (char *)malloc(sizeof(owner));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->owner. owner);

	return (new_dog);

	free(new_dog->name);
	free(new_dog->owner);
	free(new_dog);
}
