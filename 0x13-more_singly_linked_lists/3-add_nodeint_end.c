#include "lists.h"

/**
* add_nodeint_end -	Adds a node to the end of an int list
* @head:			First element of the list
* @n:				Value to be stored at the node
* Return:			pointer to the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *temp;

new = malloc(sizeof(listint_t));

if (!new)
	return (NULL);

else
	{
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		{
		*head = new;
		return (*head);
		}
	else
		{
		temp = *head;

		while (temp->next != NULL)
			{
			temp = temp->next;
			}
		temp->next = new;

		return (*head);
		}
	}
}
