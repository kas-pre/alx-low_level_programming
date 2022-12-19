#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string to print from
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
