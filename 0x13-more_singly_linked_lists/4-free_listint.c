#include "lists.h"

/**
 *free_listint - frees a list of list_t
 *@head: pointer to the list
 *Return: nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
