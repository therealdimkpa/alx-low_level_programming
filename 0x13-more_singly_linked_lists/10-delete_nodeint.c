#include "lists.h"

/**
* delete_nodeint_at_index -	Function
* @head:					Pointer to the start of the list
* @index:					Node to be deleted
* Return:					1 or -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = -1;
	listint_t *temp, *delete;

	temp = *head;
	if (index == 0)
	{
		*head = (**head).next;
		temp->next = NULL;
		free(temp);
	}
	else
	{
		while (temp != NULL)
		{
			count++;
			if (count == (index - 1))
			{
				delete = temp->next;
				temp->next = delete->next;
				if (!delete)
					return (-1);
				delete->next = NULL;
				free(delete);
				break;
			}
		temp = temp->next;
		}
	}
return (1);
}
