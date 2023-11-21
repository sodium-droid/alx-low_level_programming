#include "lists.h"

/**
 *get_nodeint_at_index - get node at specified index
 *@head: pointer to head of LL.
 *@index: index of node to return
 *Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i, count = 0;
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	temp = head;
	if (index >= count || head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
