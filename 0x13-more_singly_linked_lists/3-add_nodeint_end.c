#include "lists.h"
/**
 * add_nodeint_end - node that we are going to reaplce it with the head node
 * @n: number of nodes
 * @head: node header
 * Return: number of nodes.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
while (newnode->next != NULL)
{
	newnode = newnode->next;
	head = newnode;
}

}
