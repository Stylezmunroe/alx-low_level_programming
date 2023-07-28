#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list_items(const list_t *h);
size_t count_list_items(const list_t *h);
list_t *add_node_to_start(list_t **head, const char *str);
list_t *add_node_to_end(list_t **head, const char *str);
void free_list_items(list_t *head);

#endif
