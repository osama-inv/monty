#include "monty.h"

/**
 * monf_pstr - function that prints the string from the top
 *	of the stack, followed by a new
 *
 * @head: is the head o the stack
 * @counter: is the number of the line
 *
 * Return: nothing
*/

void monf_pstr(stack_t **head, unsigned int counter)
{
	stack_t *strin;
	(void)counter;

	strin = *head;

	while (strin != NULL)
	{
		if (strin->n > 127 || strin->n <= 0)
		{
			break;
		}
		printf("%c", strin->n);
		strin = strin->next;
	}
	printf("\n");
}
