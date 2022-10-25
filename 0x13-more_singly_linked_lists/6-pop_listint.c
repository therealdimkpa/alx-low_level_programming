#include "lists.h"

/**
* pop_listint -	Removes the first element of a list
* @head:		Pointer to the first element of the list
* Return:		Value (n) stored in the first element
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int head_n;

	if (*head == NULL)
		return (0);

	else
		{
		tmp = *head;
		head_n = (*head)->n;
		*head = (*head)->next;
		free(tmp);
		return (head_n);
		}
}
