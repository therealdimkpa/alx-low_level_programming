#include "lists.h"

/**
* get_nodeint_at_index -	Gets the node at a specified index
* @head:					Pointer to the first element of the list
* @index:					The specified index
* Return:					Pointer to thr required node
*							NULL on error
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_n;

	if (head == NULL)
		return (NULL);

	else
		{
		for (node_n = 0; node_n < index; node_n++)
			{
			if (head == NULL)
				return (NULL);

			else
				head = head->next;
			}
		}
		return (head);
}
