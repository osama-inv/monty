#include "monty.h"
/**
 * monf_mod - Calculates the modulus of the second
 * top element of the stack by the top element.
 * @head: pointer to the top element of the stack
 * @enumerate: current line number in the script
 * Return: no return
*/
void monf_mod(stack_t **head, unsigned int enumerate)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", enumerate);
		fclose(bus.file);
		free(bus.content);
		monfree_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", enumerate);
		fclose(bus.file);
		free(bus.content);
		monfree_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
