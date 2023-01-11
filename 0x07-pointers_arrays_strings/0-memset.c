#include "main.h"

/**
 * _memset - fills mem with constant byte.
 * fills the first n bytes of mem area pointed to
 * by s with constant byte b.
 * @s: pointer to mem area.
 * @b: constant to fill memory with.
 * @n: bytes of the mem area to be filled.
 *
 * Return: pointer to mem area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
