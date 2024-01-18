#include "monty.h"

/**
 * monf_pchar - a function that prints the char
 *	at the top of the stack, followed by a new line
 *
 * @head: is the head of the stack
 * @counter: is the number of the line
 *
 * Return: void
*/

void monf_pchar(stack_t **head, unsigned int counter)
{
	stack_t *ch;

	ch = *head;

	if (ch == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (ch->n > 127 || ch->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ch->n);
}
