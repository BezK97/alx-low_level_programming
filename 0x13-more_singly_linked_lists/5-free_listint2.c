#include "lists.h"

/**
 * free_list - function that frees a linked list
 *
 * @head: List to free
 */
void free_listint2(listint_t **head)
{
        listint_t *tmp, *tmp2 = *head;

        while(tmp2 != NULL)
        {
                tmp = (*tmp2).next;
                free(tmp2);
                tmp2 = tmp;
        }
	*head = NULL;
}
