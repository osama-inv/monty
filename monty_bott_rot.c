#include "monty.h"

/**
 * monf_rotr- a function that rotates the stack to the bottom
 *
 * @head: is the head of the stack
 * @counter: is the number of the line
 *
 * Return: void
*/

void monf_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *cp;

	cp = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cp->next != NULL)
	{
		cp = cp->next;
	}
	cp->next = *head;
	cp->prev->next = NULL;
	cp->prev = NULL;
	(*head)->prev = cp;
	(*head) = cp;
}
