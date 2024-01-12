#include "lists.h"

/**
 *add_dnodeint - adds a node to the head
 *of a DLL.
 *@head: pointer to the head
 *@n: value for the node to add.
 *Return: pointer to the head of the node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
