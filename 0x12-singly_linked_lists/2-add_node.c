#include "lists.h"

/**
*add_node -	Adds a node to a singly-linked list
*@head:		Struct pointer params
*@str:		char* params
*Return:	list_t value
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

return (new_node);
}
