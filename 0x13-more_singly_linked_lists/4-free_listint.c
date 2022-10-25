#include "lists.h"

/**
* free_listint -	Frees the memory held by a list;
* @head:			First element of the list
* Return:			Returns nothing
*/

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
