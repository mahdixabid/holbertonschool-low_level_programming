#include "lists.h"
/**
 * listint_len -function that returns the number of elements
 * @h: the pointer that points to the struct.
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
int count;

for (count = 0 ; h ; count++)
{
	h = h->next;
}
	return (count);
}
