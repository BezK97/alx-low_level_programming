#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts new node at a given position
 *
 * @head: pointer to head of linked list
 * @idx: index of the list where the new node should be added
 * @n: integer to add
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head, *new;
	size_t count = 0;

	if (tmp == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	for (; tmp != NULL; count++)
		tmp = (*tmp).next;
	tmp = *head;
	if (idx >= count)
		return (NULL);

	(*new).n = n;
	if (idx == 0)
	{
		(*new).next = *head;
		*head = new;
		return (new);
	}

	idx--;
	for (count = 0; count < idx; count++)
	{
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
		tmp = (*tmp).next;
	}
	(*new).next = (*tmp).next;
	(*tmp).next = new;

	return (new);
}