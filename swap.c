#include "monty.h"

/**
 * f_swap - swap the top two elements of the stack
 * @head: head node
 * @counter: line number
 * Return: void
 */

void f_swap(stack_t **head, unsigned int number)
{
	stack_t *temp;
	int len = 0, sw;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	sw = temp->n;
	temp->n = temp->next->n;
	temp->next->n = sw;
}
