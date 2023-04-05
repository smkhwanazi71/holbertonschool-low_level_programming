#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - A function that inserts a node at
 * position in a list.
 * @h: The double pointer to the head.
 * @idx: The index to insert new node at.
 * @n: The data to add to new node.
 * Return: A pointer to new element, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node = NULL;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx > 1 && *h != NULL)
		return (insert_dnodeint_at_index(&((*h)->next), idx - 1, n));

	if (idx > 1 || *h == NULL)
		return (NULL);

	if ((*h)->next == NULL)
		return (add_dnodeint_end(h, n));

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	node->n = n;
	node->next = (*h)->next;
	node->prev = (*h);
	(*h)->next->prev = node;
	(*h)->next = node;
	return (node);
}
