#include "monty.h"

/**
 * execute - executes the opcode
 * @content: line content
 * @counter: line_counter
 * @file: pointer to monty file
 */

int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t op[] = {
		{"push", f_push},
		{"pall", f_pall},
		{"pop", f_pop},
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
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, opcode);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	return (1);
}
