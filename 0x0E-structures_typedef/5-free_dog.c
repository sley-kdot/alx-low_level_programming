#include "dog.h"

/**
* free_dog - frees dogs
* @d: struct dog
* Return: void
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
		free(d);
	}
