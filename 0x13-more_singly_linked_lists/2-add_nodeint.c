#include "lists.h"

/**
 *add_nodeint - adds a node to the head
 *of list_t
 *@head: pointer to first node
 *@n: data per node
 *Return: pointer to the first node (new node).
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->n = n;
	*head = new;
return (new);
}
