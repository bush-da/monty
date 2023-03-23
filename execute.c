#include "monty.h"

/**
 * address_error - print error message in stderr
 * @stack: linked list structure
 * @counter: number that error occured
 * @opcode: operation code
 * Return: void
 */

void address_error(stack_t **stack, int counter, char *opcode)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", counter, opcode);
	fclose(bus.file);
	free(bus.content);
	free_stack(*stack);
	exit(EXIT_FAILURE);
}



/**
 * execute - executes the opcode
 * @content: line content
 * @counter: line_counter
 * @stack: linked list
 * @file: pointer to monty file
 * Return: void
 */

int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t op[] = {
		{"push", f_push},
		{"pall", f_pall},
		{"pop", f_pop},
		{"pint", f_pint},
		{"swap", f_swap},
		{"add", f_add},
		{"nop", f_nop},
		{"sub", f_sub},
		{"mul", f_mul},
		{NULL, NULL}
	};

	unsigned int i = 0;
	char *opcode;

	opcode = strtok(content, " \t\n");

	if (opcode && opcode[0] == '#')
		return (0);

	bus.arg = strtok(NULL, " \n\t");
	while (op[i].opcode && opcode)
	{
		if (strcmp(opcode, op[i].opcode) == 0)
		{
			op[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (opcode && op[i].opcode == NULL)
	{
		address_error(stack, counter, opcode);
	}

	return (1);
}
