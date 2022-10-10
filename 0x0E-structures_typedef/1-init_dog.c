#include <stdlib.h>
#include "dog.h"
/**
* init_dog -the entry point
* @d: passing structure of the function
* @name: storing a string as name
* @age: storing a float as age
* @owner: storing a string as dog owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner);
{
/*passing from main to structure*/
if(d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
