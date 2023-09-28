#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The input string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s)  /* If the current character is not the null terminator */
	{
		_print_rev_recursion(s + 1); /* Recursively call with the next character */
		_putchar(*s); /* Print the current character */
	}
}

