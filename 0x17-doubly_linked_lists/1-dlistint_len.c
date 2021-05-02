#include "lists.h"

/**
 * dlistint_len - function that returns number of elements in dlistint_t list
 *
 * @h: doubly linked list
 *
 * Return: Number of element in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;

	while(h != NULL)
	{
		len++;
		h = (*h).next;
	}
	return (len);
}
