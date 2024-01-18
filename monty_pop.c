#include "monty.h"

/**
 * monf_pop - a function that removes the top element of the stack
 *
 * @head: is the head of the stack
 * @counter: is the number of the line
 *
 * Return: void
*/

void monf_pop(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
