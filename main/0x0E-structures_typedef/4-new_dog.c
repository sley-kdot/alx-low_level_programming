#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates a new dog.
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*
* Return: pointer to a dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;
	int i, name_len, owner_len;

	ptr_dog = malloc(sizeof(*ptr_dog));

	if (ptr_dog == NULL || !(name) || !(owner))
	{
		free(ptr_dog);
		return (NULL);
	}

	for (name_len = 0; name[name_len]; name_len++)
		;
	for (owner_len = 0; owner[owner_len]; owner_len++)
		;

	ptr_dog->name = malloc(name_len + 1);
	ptr_dog->owner = malloc(owner_len + 1);

	if (!(ptr_dog->name) || !(ptr_dog->owner))
	{
		free(ptr_dog->owner);
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		ptr_dog->name[i] = name[i];
	ptr_dog->name[i] = '\0';

	ptr_dog->age = age;

	for (i = 0; i < owner_len; i++)
		ptr_dog->owner[i] = owner[i];
	ptr_dog->owner[i] = '\0';

	return (ptr_dog);
}
