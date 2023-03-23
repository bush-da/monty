#include "monty.h"
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
		{"push", f_push}, {"pall", f_pall}, {"pop", f_pop},
		{"pint", f_pint}, {"swap", f_swap}, {"add", f_add},
		{"nop", f_nop},
		{"sub", f_sub},
		{"mul", f_mul},
		{"pchar", f_pchar},
		{"pstr", f_pstr},
		{"div", f_div},
		{"mod", f_mod},
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
