#include "monty.h"

/**
 * monf_sub- is a function that subtracts the top element
 *	of the stack from the second top element of the stack
 *
 * @head: is the head of the stack
 * @counter: is the number o the line
 *
 * Return: void
*/

void monf_sub(stack_t **head, unsigned int counter)
{
	stack_t *ptr;
	int ele, nod_n;

	ptr = *head;

	for (nod_n = 0; ptr != NULL; nod_n++)
	{
		ptr = ptr->next;
	}
	if (nod_n < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	ptr = *head;
	ele = ptr->next->n - ptr->n;
	ptr->next->n = ele;
	*head = ptr->next;
	free(ptr);
}
