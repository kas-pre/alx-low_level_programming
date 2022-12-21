#include "main.h"

/**
 * _strcmp - does pointer string comparison
 * @s1: str 1 pointer
 * @s2: str 2 pointer
 * Return: If str1 < str2, negative diff of first
 * unmatched chars
 *	If s1 == s2, 0.
 *	If s1 > s2, the positive diff of
 *	first unmatched chars
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
