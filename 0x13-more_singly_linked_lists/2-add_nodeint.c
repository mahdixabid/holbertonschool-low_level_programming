#include "lists.h"
/**
 * listint_len -function that returns the number of elements
 * @h: the pointer that points to the struct.
 * Return: number of nodes.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
