#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - function to copy of elements
  * @name: pointer of name element
  * @age: pointer of age
  * @owner: pointer of owner element
  * Return: A struct is returned
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		dog2 = malloc(sizeof(dog_t));

		if (dog2 == NULL)
			return (NULL);

		dog2->name = malloc(sizeof(char) * name_l);

		if (dog2->name == NULL)
		{
			free(dog2);
			return (NULL);
		}

		dog2->owner = malloc(sizeof(char) * own_l);

		if (dog2->owner == NULL)
		{
			free(dog2);
			return (NULL);
		}

		dog2->name = _strcpy(dog2->name, name);
		dog2->age = age;
		dog2->owner = _strcpy(dog2->owner, owner);
	}

	return (dog2);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
