#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog attributes
 * @name: name of dogs, char input
 * @age: age of dog; float input
 * @owner: dog owner, char input
 */


struct dog{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
