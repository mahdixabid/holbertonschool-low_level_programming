#include "lists.h"
/**
 * add_nodeint - this function adds a new node at the beginning of a list
 * @head: the pointer that points to the struct
 * @n: integer in the struct
 *
 * Return: the adress of the new element
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
