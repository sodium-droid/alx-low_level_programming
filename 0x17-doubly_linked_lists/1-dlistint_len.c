#include "lists.h"
/**
 * dlistint_len - prints all the
 * elements of a DLL
 * @h: pointer to the head
 * of the node
 * Return: Returns count of nodes.
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t i, count = 0;

	for (i = 0; temp != NULL; i++)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
