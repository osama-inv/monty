#include "monty.h"
/**
 * monf_push - add node
 * @head:  head
 * @enumerate: number
 * Return: no return
*/
void monf_push(stack_t **head, unsigned int enumerate)
{
	int nuum, kj = 0, F_lag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			kj++;
		for (; bus.arg[kj] != '\0'; kj++)
		{
			if (bus.arg[kj] > 57 || bus.arg[kj] < 48)
				F_lag = 1; }
		if (F_lag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", enumerate);
			fclose(bus.file);
			free(bus.content);
			monfree_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", enumerate);
		fclose(bus.file);
		free(bus.content);
		monfree_stack(*head);
		exit(EXIT_FAILURE); }
	nuum = atoi(bus.arg);
	if (bus.lifi == 0)
		monaddnode(head, nuum);
	else
		monaddqueue(head, nuum);
}
