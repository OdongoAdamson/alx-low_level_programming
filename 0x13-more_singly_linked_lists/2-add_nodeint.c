#include "lists.h"

/**
 * add_nodeint - add a new node at the beginnig
 * @head: pointer to the first node
 * @n: data to be inserted
 *
 * Return: Pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_first;

	new_first = malloc(sizeof(listint_t));

	if(!new_first)
	return (NULL);

	new_first->n = n;
	new_first->next = *head;
	*head = new_first;

	return (new_first);
}
