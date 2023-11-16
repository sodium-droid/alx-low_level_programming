#include "lists.h"

/**
 *print_list - prints the elements of
 *a linked list.
 *@h: pointer to the list
 *Return: number of elements
 */

size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);

		temp = temp->next;
		count++;
	}

return (count);
}
