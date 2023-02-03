#include "main.h"
#define NULL 0

/**
 * _strchr - locate 1st occurence of char in string
 * and return pointer to it.
 * @s: string to searh
 * @c: target character
 * Return: pointer to char in the string
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);

	else
		return (NULL);
}
