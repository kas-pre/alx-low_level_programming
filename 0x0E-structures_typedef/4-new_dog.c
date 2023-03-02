#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

int i = 0, j = 0, k;
dog_t *puppy;

while (name[i] != '\0')
i++;
while (owner[j] != '\0')
j++;

puppy = malloc(sizeof(dog_t));
if (puppy == NULL)
{
free(puppy);
return (NULL);
}

puppy->name = malloc(i *sizeof(puppy->name));
if (puppy->name == NULL)
{
free(puppy->name);
free(puppy);
return (NULL);
}

for (k = 0; k <= i; k++)
puppy->name[k] = name[k];
puppy->age = age;

puppy->owner = malloc(j *sizeof(puppy->owner));
if (puppy->owner == NULL)
{
free(puppy->owner);
free(puppy->name);
free(puppy);
return (NULL);
}

for (k = 0; k <= j; k++)
puppy->owner[k] = owner[k];
return (puppy);
}
