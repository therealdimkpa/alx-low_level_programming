#include "lists.h"

/**
* free_listint2 -	Frees the memory held by a list;
* @head:			First element of the list
* Return:			Returns nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	else
	{
		while (*head)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
		head = NULL;
	}
}
