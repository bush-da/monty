#include "monty.h"

/**
 * f_mul - multiple the first two elements of stack
 * @head: head node
 * @number: line number
 * Return: void
 */

void f_mul(stack_t **head, unsigned int number)
{
	stack_t *temp;
	int len = 0, mul;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;

	mul = temp->n * temp->next->n;
	temp->next->n = mul;
	(*head) = temp->next;
	free(temp);
}
