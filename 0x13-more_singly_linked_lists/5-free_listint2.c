#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 *
 * @head: Pointer to list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *tmp2 = *head;

	if (head != NULL)
	{
		while (tmp2 != NULL)
		{
			tmp = tmp2;
			tmp2 = (*tmp2).next;
			free(tmp);
		}
		*head = NULL;
	}
}
