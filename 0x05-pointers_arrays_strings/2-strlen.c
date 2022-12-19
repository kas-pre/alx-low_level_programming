#include "main.h"

/**
 * _strlen - return length of string
 * @s: string param
 * Return: int length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
