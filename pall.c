#include "monty.h"
/**
 * monf_pall - prints all
 * @head:  head
 * @enumerate: no used
 * Return: no return
*/
void monf_pall(stack_t **head, unsigned int enumerate)
{
	stack_t *h;
	(void)enumerate;

	h = *head;
	if (h == NULL)
	{
		return;
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
