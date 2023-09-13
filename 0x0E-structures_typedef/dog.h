#ifndef DOG_H
#define DOG_H
/**
 *struct dog - for do structure
 *description: this function for structure dog
 *@name: name of dog
 *@age: age of dog
 *@owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif