#include "monty.h"
/**
* monfree_stack - frees the list
* @head: head of the stack
*/
void monfree_stack(stack_t *head)
{
	stack_t *ader;

	ader = head;
	while (head)
	{
		ader = head->next;
		free(head);
		head = ader;
	}
}
