#include "lists.h"
/**
 * pop_listint - function that delete the head node of a list
 * @head: the pointer to the struct
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *fr;
	int nodedata;

	if (*head == NULL)
	{
		return (0);
	}

	nodedata = (*head)->n;
	fr = (*head)->next;
	free(*head);
	*head = fr;
	return (nodedata);
}
