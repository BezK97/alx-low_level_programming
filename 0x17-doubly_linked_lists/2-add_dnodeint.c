#include "lists.h"

/**
 * add_dnodeint - function that adds new node at the beginning of linked list
 *
 * @head: head of linked list
 * @n: number to add
 *
 * Return: the adress of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	(*new).n = n;
	if (*head != NULL)
	{
		(*new).next = *head;
		(*new).prev = (*(*head)).prev;
		(*(*head)).prev = new;
		*head = new;
		return (*head);
	}

	(*new).next = *head;
	(*new).prev = NULL;
	*head = new;
	return (*head)
}
