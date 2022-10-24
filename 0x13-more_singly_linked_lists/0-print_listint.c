#include "Lists.h"

/**
*
*
*
*/

size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	listint_t *node;

	if (h == NULL)
		return (size);

	for (; size < 1; size++)
		if (h->str != NULL)
			printf("%s\n", h->str);

	if (h->next == NULL)
		return (size);

	node = h->next;

	for (; node != NULL; size++, node = node->next)
		if (node->str != NULL)
			printf("%s\n", node->str);

	return (size);
}
