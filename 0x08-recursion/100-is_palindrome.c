#include "main.h"

int check_palindrome(char *s, int i, int len);
int string_length(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if it is a palindrome, 0 if it's not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, string_length(s)));
}

/**
 * string_length - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_length(s + 1));
}

/**
 * check_palindrome - Recursively checks the characters for palindrome.
 * @s: The string to check.
 * @i: Iterator.
 * @len: Length of the string.
 *
 * Return: 1 if it is a palindrome, 0 if it's not.
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}

