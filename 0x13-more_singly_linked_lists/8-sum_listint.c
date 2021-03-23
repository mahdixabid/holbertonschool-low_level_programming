#include "lists.h"
/**
 * sum_listint - sum fo all data of a linked list
 * @head: the pointer to the struct
 *
 * Return: the sum of all data in a linkeed list
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
