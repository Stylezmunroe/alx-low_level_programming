#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion.
 * @s: The input string to print.
 */
void _puts_recursion(char *s)
{
	if (*s)  /* If the current character is not the null terminator */
	{
		_putchar(*s); /* Print the current character */
		_puts_recursion(s + 1); /* Recursively call with the next character */
	}
	else
	{
		_putchar('\n'); /* Print a new line when the end of the string is reached */
	}
}

