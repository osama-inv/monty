#include "monty.h"
/**
 * monf_add - Adds the top two elements from the stack.
 * @head: pointer to the top element of the stack
 * @enumerate: current line number in the script
 * This function does not return a value.
 * Return: no return
*/
void monf_add(stack_t **head, unsigned int enumerate)
{
	stack_t *h;
	int thelen = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		thelen++;
	}
	if (thelen < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", enumerate);
		fclose(bus.file);
		free(bus.content);
		monfree_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
