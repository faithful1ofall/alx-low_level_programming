#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *few;
	unsigned int flen = 0;

	while (str[flen])
		flen++;

	few = malloc(sizeof(list_t));
	if (few == NULL)
		return (NULL);

	(*few).str = strdup(str);
	(*few).len = flen;
	(*few).next = (*head);
	(*head) = few;

	return (*head);
}
