#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a node from a doubly linked list
 *
 * @head: The head of the doubly linked list
 * @index: The index to find in the doubly linked list
 *
 * Return: The indeth node of the doubly linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	if (head != NULL)
	{
		while (current != NULL)
		{
			if (count == index)
				return (current);

			current = (*current).next;
			count++;
		}
	}
	return (NULL);
}
