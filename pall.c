#include "monty.h"
/**
 * f_pall - prints all
 * @head:  head
 * @enumerate: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int enumerate)
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
