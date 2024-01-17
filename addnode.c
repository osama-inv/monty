#include "monty.h"
/**
 * monaddnode - add node to the head stack
 * @head: pointer to the first node of the stack
 * @n: value to be assigned to the new node
 * Return: no return
*/
void monaddnode(stack_t **head, int n)
{

	stack_t *nouveax, *adie;

	adie = *head;
	nouveax = malloc(sizeof(stack_t));
	if (nouveax == NULL)
	{ printf("Error\n");
		exit(0); }
	if (adie)
	{
		adie->prev = nouveax;
	}
	nouveax->n = n;
	nouveax->next = *head;
	nouveax->prev = NULL;
	*head = nouveax;
}
