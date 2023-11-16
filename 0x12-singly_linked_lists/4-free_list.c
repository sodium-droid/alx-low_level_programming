#include "lists.h"

/**
 *free_list - frees a list of list_t
 *@head: pointer to the list
 *Return: nothing.
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
