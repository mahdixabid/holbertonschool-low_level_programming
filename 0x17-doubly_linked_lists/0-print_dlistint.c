#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h:the pointer that points to the struct.
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
