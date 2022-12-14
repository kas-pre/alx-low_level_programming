#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 * @a: first integer
 * @b: second integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
