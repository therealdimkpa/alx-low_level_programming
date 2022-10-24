#include "lists.h"

/**
* print_listint -	Prints a list of integers
* @h:				Pointer to the first element of the list
* Return:			Number of elements in the list
*/

size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	listint_t *node;

	if (h == NULL)
		return (size);

	if (h->n != 0)
		{
		printf("%d\n", h->n);
		size++;
		}

	if (h->next == NULL)
		return (size);

	node = h->next;

	for (; node != NULL; size++, node = node->next)
		printf("%d\n", node->n);

	return (size);
}
