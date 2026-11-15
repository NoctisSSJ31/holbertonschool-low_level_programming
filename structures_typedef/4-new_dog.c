#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Return: Pointer to the new dog_t, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, len_name = 0, len_owner = 0;
	char *n, *o;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	n = malloc(sizeof(char) * (len_name + 1));
	if (n == NULL)
	{
		free(d);
		return (NULL);
	}

	o = malloc(sizeof(char) * (len_owner + 1));
	if (o == NULL)
	{
		free(n);
		free(d);
		return (NULL);
	}

	for (i = 0; i <= len_name; i++)
		n[i] = name[i];
	for (i = 0; i <= len_owner; i++)
		o[i] = owner[i];

	d->name = n;
	d->age = age;
	d->owner = o;

	return (d);
}
