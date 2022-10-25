#include "lists.h"

/**
* sum_listint -	Sums all the values stored in the list
* @head:		The start of the list
* Return:		The sum of all 'n' values of the list elements
*/

int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
	{
	sum += head->n;
	head = head->next;
	}
return (sum);
}
