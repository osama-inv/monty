#include "monty.h"
/**
 * monf_mul - Multiplies the top two elements.
 * @head: pointer to the top element of the stack
 * @enumerate: current line number in the script
 * Return: no return
*/
void monf_mul(stack_t **head, unsigned int enumerate
)
{
	stack_t *h;
	int thelen = 0, aide;

	h = *head;
	while (h)
	{
		h = h->next;
		thelen++;
	}
	if (thelen < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", enumerate
	);
		fclose(bus.file);
		free(bus.content);
		monfree_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aide = h->next->n * h->n;
	h->next->n = aide;
	*head = h->next;
	free(h);
i}
