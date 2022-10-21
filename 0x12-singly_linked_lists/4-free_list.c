#include "lists.h"

/**
*free_list -	Frees a linked list
*@head:			params
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}

