#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the pointer to the struct
 * @n: integer in the struct
 * @idx: index of the list where the new node should be added
 *
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *move = *head;
	unsigned int index;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		for (index = 0 ; index < idx - 1 ; index++)
		{
			move = move->next;
			if (move == NULL)
			{
				free(newnode);
				return (NULL);
			}
		}
		newnode->next = move->next;
		move->next = newnode;
	}
	return (newnode);
}
