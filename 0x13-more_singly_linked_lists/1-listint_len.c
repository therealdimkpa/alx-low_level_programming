#include "lists.h"

/**
* listint_len -	Prints the number of nodes in a list
* @h:			The head/start of the list
* Return:		THe size of the list
*/

size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
		{
		size++;
		h = h->next;
		}

	return (size);
}
