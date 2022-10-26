#include "lists.h"

/**
* insert_nodeint_at_index -	Inserts a node at a specified index
* @head:					First element of the list
* @idx:						Index the node should be added to
* @n:						Value to be stored in the node
* Return:					Pointer to the node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *copy = *head;
unsigned int node;

new = malloc(sizeof(listint_t));

if (!new)
	return (NULL);

else
	{
	new->n = n;
	if (idx == 0)
		{
		new->next = copy;
		*head = new;
		return (new);
		}
	for (node = 0; node < (idx - 1); node++)
		{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		else
			copy = copy->next;
		}
	new->next = copy->next;
	copy->next = new;

	return (new);
	}
}
