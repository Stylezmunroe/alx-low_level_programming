#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - Duplicate a string into a new memory space.
* @str: Pointer to the input string to duplicate.
*
* Return:0
*/
char *_strdup(char *str)
{
char *duplicate;
int length = 0;

if (str == NULL)
return (NULL);

while (str[length] != '\0')
length++;

duplicate = malloc(sizeof(char) * (length + 1));

if (duplicate == NULL)
return (NULL);

for (int i = 0; i <= length; i++)
duplicate[i] = str[i];

return (duplicate);
}

