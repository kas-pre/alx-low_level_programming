#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: buffer storing string copy
 * @src: string to copy from
 * @n: str length limit - max bytes to copy from src
 * Return: pointer to result string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;


	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
