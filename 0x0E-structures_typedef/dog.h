#ifndef DOG_H
#define DOG_H

/**
* struct dog -	Defines the dog structure
* @name:		Name of the dog
* @age:			The age of the dog
* @owner:		The name of the owner of the dog
*/

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
