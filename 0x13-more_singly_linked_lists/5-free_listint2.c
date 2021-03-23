#include "lists.h"
/**
 * free_listint2 -  function that frees a list
 * @head:  pointer to the struct
 *
 * Return:  number of elements
 */
void free_listint2(listint_t **head)
{
	listint_t *fr;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		fr = *head;
		*head = fr->next;
		free(fr);
	}
}
