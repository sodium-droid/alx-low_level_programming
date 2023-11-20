#include "lists.h"

/**
 *add_nodent_end - adds a node to the last
 *node of list_t
 *@head: pointer to first node
 *@n: data per node.
 *Return: address of new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	temp = *head;
	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
return (new);
}
