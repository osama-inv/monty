#include "monty.h"

/**
 * monf_swap - a function that swaps the top two elements of the stack
 *
 * @head: is the head of the stack
 * @counter: is the number of the line
 *
 * Return: void
*/

void monf_swap(stack_t **head, unsigned int counter)
{
	stack_t *ptr;
	int siz = 0, temp;

	ptr = *head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		siz++;
	}
	if (siz < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	temp = ptr->n;
	ptr->n = ptr->next->n;
	ptr->next->n = temp;
}
