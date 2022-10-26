#include "lists.h"

/**
* delete_nodeint_at_index -	Function
* @head:					Pointer to the start of the list
* @index:					Node to be deleted
* Return:					1 or -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp, *copy = *head;
	temp = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	else
	{
		for (count = 0; count < (index - 1); count++)
		{
			if (copy->next == NULL)
				return (-1);
			copy = copy->next;
		}
		temp = copy->next;
		copy->next = temp->next;
		free(temp);
		return (1);
	}
}
