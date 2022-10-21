#include "lists.h"

/**
*add_node_end -	Adds the last node of a singly-linked list
*@head:			Pointer to struct pointer params
*@str:			Char* params
*Return:		list_t struct
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *endNode = malloc(sizeof(list_t));

	endNode->str = strdup(str);
	endNode->len = strlen(str);
	temp = *head;

	if (*head == NULL)
	{
		*head = endNode;
		return (endNode);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = endNode;

return (endNode);
}

