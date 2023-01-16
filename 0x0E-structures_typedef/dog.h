#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - structure for some dog
 * @name: dog's name
 * @owner: dog's owner name
 * @age: dog's age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

#endif /* _DOG_H */
