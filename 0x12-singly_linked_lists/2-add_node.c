#include "lists.h"

/**
 *add_node - adds a node to the head
 *of list_t
 *@head: pointer to first node
 *@str: pointer to string in corresponding node
 *Return: pointer to the first node (new node).
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	*head = new;
return (new);
}
