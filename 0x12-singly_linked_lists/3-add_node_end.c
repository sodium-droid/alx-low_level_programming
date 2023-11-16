#include "lists.h"

/**
 *add_node_end - adds a node to the last
 *node of list_t
 *@head: pointer to first node
 *@str: pointer to string.
 *Return: address of new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;

	temp = *head;
	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->str = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
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
