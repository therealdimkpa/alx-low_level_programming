#include "lists.h"

/**
* add_nodeint -	Adds a node to the beginning of a list
* @head:		Pointer to the first elemenent
* @n:			The value to be stored in the node
* Return:		Pointer to the new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));

if (new == NULL)
	return (new);

else
	{
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
	}
}
