#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *few;
	list_t *ftmp = *head;
	size_t flen = 0;

	while (str[flen])
		flen++;

	few = malloc(sizeof(list_t));
	if (few == NULL)
		return (NULL);

	(*few).str = strdup(str);
	(*few).len = flen;
	(*few).next = NULL;

	if (*head == NULL)
	{
		*head = few;
		return (few);
	}

	while (ftmp->next)
		ftmp = (*ftmp).next;

	(*ftmp).next = few;

	return (few);
}
