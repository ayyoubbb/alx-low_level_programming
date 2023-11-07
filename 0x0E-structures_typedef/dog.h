#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define three types of elements
 * @name: first parameter of char.
 * @age: second parameter of float
 * @owner: third paramter of chr
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
