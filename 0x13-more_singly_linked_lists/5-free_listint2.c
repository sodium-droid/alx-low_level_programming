#include "lists.h"

/**
 *free_listint2 - frees a list of list_t
 *@head: pointer to the list
 *Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	current = *head;
	if (head != NULL)
	{
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
	*head = NULL;
	}
}
