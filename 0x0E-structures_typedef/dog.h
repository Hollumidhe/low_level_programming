#ifnedf DOG.H
#define DOG.H
/**
* struct dog - list dates about dog
* @name: name of dog
* @age: age of dog
* @owner: dog owner
*/

struct dog
}
char *name;
float age;
char owner;
}
void init_dog(struct dog *g, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
* dog rename struct with typeof
*/
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
