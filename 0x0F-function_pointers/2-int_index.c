#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: The array to search.
 * @size: The number of elements in array.
 * @cmp: A pointer to the comparison function.
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

