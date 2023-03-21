#include "dog.h"

/**
* free_dog - frees dogs
* @d: struct to free
* Return: void
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
		free(d);
	}
