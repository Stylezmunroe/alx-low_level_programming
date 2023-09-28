#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The input string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		int length = 1;

		length += _strlen_recursion(s + 1);
		return (length);
	}

	return (0);
}

