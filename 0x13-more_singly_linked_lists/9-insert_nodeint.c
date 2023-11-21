#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a node at specified index
 *@head: pointer to head of LL.
 *@idx: index position of node to insert
 *@n: data of the insert node.
 *Return: address of node at idx
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, count = 0;
	listint_t *temp, *prev, *new;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	temp = *head;
	if (idx >= count || head == NULL)
		return (NULL);
	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; i < idx; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (idx == 0)
		prev = temp = *head;
	new->n = n;
	new->next = temp;
	prev->next = new;
	return (new);
}
