#include "lists.h"

/**
 *pop_listint - frees a list of list_t
 *@head: pointer to the list
 *Return: nothing.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (0);
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
