#ifndef _DOG_
#define _DOG_

/**
* dog_t -  Typedef for unsigned int
*/
typedef unsigned int dog_t;

/**
* struct dog - struct that store info of a dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
