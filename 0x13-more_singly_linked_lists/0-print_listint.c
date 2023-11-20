#include "lists.h"

/**
 *print_listint - prints the elements of
 *a linked list.
 *@h: pointer to the list
 *Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		(temp->n == 0) ? printf("%d\n", 0) : printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

return (count);
}
