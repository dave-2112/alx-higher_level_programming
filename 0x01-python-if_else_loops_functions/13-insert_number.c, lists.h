#include "lists.h"

/**
 * insert_node - Inserts a new node in ascending order of a sorted linked list
 * of numbers.
 *
 * @head: Pointer of a pointer to the beginning of the linked list.
 * @number: The number of the new node.
 *
 * Return: The address of the newly added node, or NULL upon failure.
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node;
	listint_t *current;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = number;

	current = *head;
	if (current)
	{
		if (current->n > number)
		{
			new_node->next = current;
			*head = new_node;
		}
		else
		{
			while (current && current->next)
			{
				if (current->next->n < number)
					current = current->next;
				else
					break;
			}
			new_node->next = current->next;
			current->next = new_node;
		}
	}
	else
	{
		*head = new_node;
		new_node->next = NULL;
	}

	return (new_node);
}
