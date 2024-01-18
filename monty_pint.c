#include "monty.h"

/**
 * monf_pint - is a function that prints the top
 *	of the stack, followed by a new line
 *
 * @head: is the head of the stack
 * @counter: is the line number
 *
 * Return: void
*/

void monf_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		monfree_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
