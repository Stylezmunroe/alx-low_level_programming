#include "main.h"
#include <stdlib.h>

/**
* create_array - Create an array of characters and assign char c.
* @size: The size of the array to create.
* @c: The character to initialize the array with.
*
* Return: If successful, a pointer to the newly created array; otherwise, NULL.
*/
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;

if (size == 0)
return (NULL);

str = malloc(sizeof(char) * size);
if (str == NULL)
return (NULL);

for (i = 0; i < size; i++)
str[i] = c;

return (str);
}

