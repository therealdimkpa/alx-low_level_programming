#include "lists.h"

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
