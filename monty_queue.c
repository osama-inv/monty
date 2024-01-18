#include "monty.h"

/**
 * monf_queue - a function that sets the format of the data to a queue
 *
 * @head: is the head of the stack
 * @counter: is the number of the line
 *
 * Return: void
*/

void monf_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * monaddqueue - a function that adds a node to the stack tail
 *
 * @n: is a new value
 * @head: is the head of the stack
 *
 * Return: void
*/

void monaddqueue(stack_t **head, int n)
{
	stack_t *n_node, *ptr;

	ptr = *head;
	n_node = malloc(sizeof(stack_t));

	if (n_node == NULL)
	{
		printf("Error\n");
	}
	n_node->n = n;
	n_node->next = NULL;

	if (ptr != NULL)
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}
	}
	if (ptr == NULL)
	{
		*head = n_node;
		n_node->prev = NULL;
	}
	else
	{
		ptr->next = n_node;
		n_node->prev = ptr;
	}
}
