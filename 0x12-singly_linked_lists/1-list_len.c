#include "lists.h"

/**
* list_len - count size list
* @h: list top count
* Return: count of nodes
*/

size_t list_len(const list_t *h)
{
	int count;

	for (count = 0; h; count++)
	{
		h = h->next;
	}

	return (count);
}
