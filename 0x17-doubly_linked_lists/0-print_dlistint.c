#include "lists.h"
/**
 * print_dlistint - prints all the
 * elements of a DLL
 * @h: pointer to the head
 * of the node
 * Return: Returns count of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp = h;
	size_t count = 0;
	int i;

	for (i = 0; temp != NULL; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
