#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new person to the end of the line.
 * @head: double pointer to the list_t list.
 * @str: the name of the new person (a string).
 *
 * Return: Address of the new person, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_person;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len] != ' ' && str[len] != '\t' && str[len] != '\0')
		len++;

	new_person = malloc(sizeof(list_t));
	if (!new_person)
		return (NULL);

	new_person->str = strdup(str);
	new_person->len = len;
	new_person->next = NULL;

	if (*head == NULL)
	{
		*head = new_person;
		return (new_person);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_person;

	return (new_person);
}
