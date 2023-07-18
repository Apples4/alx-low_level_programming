#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - a program to make a struct dog
 * @d: a struct called dog
 * @name: element of struct name, char input
 * @age: element of struct age, float input
 * @owner: element of struct, char input
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
