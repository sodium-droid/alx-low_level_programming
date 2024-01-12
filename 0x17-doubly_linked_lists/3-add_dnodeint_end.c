#include "lists.h"

/**
 *add_dnodeint_end - adds a node to the end
 *of a DLL.
 *@head: pointer to the head
 *@n: value for the node to add.
 *Return: pointer to the end of the list.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	if (head == NULL)
		return (NULL);
	temp = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	new->prev = temp;
	temp->next = new;
	return (new);
}
