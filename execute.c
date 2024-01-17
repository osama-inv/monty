#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", monf_push}, {"pall", monf_pall}, {"pint", monf_pint},
				{"pop", monf_pop},
				{"swap", monf_swap},
				{"add", monf_add},
				{"nop", monf_nop},
				{"sub", monf_sub},
				{"div", monf_div},
				{"mul", monf_mul},
				{"mod", monf_mod},
				{"pchar", monf_pchar},
				{"pstr", monf_pstr},
				{"rotl", monf_rotl},
				{"rotr", monf_rotr},
				{"queue", monf_queue},
				{"stack", monf_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		monfree_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
