#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node.
 *
 * @head: Double linked list.
 * @index: Position
 *
 * Return: 1 Success, -1 Failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	for (count = 0; tmp != NULL && count < index; count++)
		tmp = (*tmp).next;
	if (tmp == NULL)
		return (-1);
	if (count == index)
	{
		if ((*(*head)).next == NULL)
		{
			*head = NULL;
			free(tmp);
			return (1);
		}
		if (aux == (*head))
		{
			(*head) = (*(*head)).next;
			(*(*head)).prev = NULL;
			free(tmp);
			return (1);
		}
		if ((*tmp).next == NULL)
		{
			(*(*tmp).prev).next = NULL;
			free(tmp);
			return (1);
		}
		(*(tmp).next).prev = (*tmp).prev;
		(*(tmp).prev).next = (*tmp).next;
		free(tmp);
		return (1);
	}
	return (-1);
}
