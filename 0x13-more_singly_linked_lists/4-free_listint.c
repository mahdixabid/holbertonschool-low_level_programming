#include "lists.h"
/**
 * free_listint - this function frees a list
 * @head: the pointer to the struct
 *
 * Return: the number of elements
 */
void free_listint(listint_t *head)
{
	listint_t *fr;

	while (head != NULL)
	{
		fr = head;
		head = fr->next;
		free(fr);
	}
}
