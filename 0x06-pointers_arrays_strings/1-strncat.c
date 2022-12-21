#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @n: specifies bytes in src
 * @src: second string
 * @dest: first string
 * Return: pointer to result string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
