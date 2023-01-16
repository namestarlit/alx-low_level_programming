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
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H */
