#include "monty.h"

/**
 * monf_rotl- a function that rotates the stack to the top
 *
 * @head: is the head of stack
 * @counter: is the number of the line
 *
 * Return: void
*/

void monf_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *temp = *head, *ptr;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	ptr = (*head)->next;
	ptr->prev = NULL;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = ptr;
}
