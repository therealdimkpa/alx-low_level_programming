#include "dog.h"
#include <stdlib.h>

/**
* init_dog -	Initializes the dog struct with specified values
* @d:			The dog
* @name:		The name of the dog
* @age:			The age of the dog
* @owner:		Name of the owner
* Return:		The initialized struct
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
