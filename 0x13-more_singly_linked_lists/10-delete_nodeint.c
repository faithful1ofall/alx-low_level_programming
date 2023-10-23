#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *te = *head;
	listint_t *curr = NULL;
	size_t i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*(*head)).next;
		free(te);
		return (1);
	}

	while (i < index - 1)
	{
		if (te == NULL || ((*te).next) == NULL)
			return (-1);
		te = (*te).next;
		i++;
	}


	curr = (*te).next;
	(*te).next = (*curr).next;
	free(curr);

	return (1);
}
