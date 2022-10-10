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

/**
* struct dog_t - Defines the dog structure
* @name:        Name of the dog
* @age:         The age of the dog
* @owner:       The name of the owner of the dog
*/

typedef struct dog_t
{
char *name;
float age;
char *owner;
};

dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
