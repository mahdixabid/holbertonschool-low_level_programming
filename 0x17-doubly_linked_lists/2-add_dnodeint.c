#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginning of a list
 * @head: head of the doubly linked list
 * @n: data to insert in the list
 *
 * Return: the address of the new element of NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node != NULL)
	{
		new_node->next = *head;
		new_node->prev = NULL;
		new_node->n = n;

		if (*head != NULL)
		{
			(*head)->prev = new_node;
		}
		*head = new_node;
		return (new_node);
	}
	return (NULL);
}
