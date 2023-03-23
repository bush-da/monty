#include "monty.h"

/**
 * f_sub - subtract the top two elements of stack
 * @head: head node
 * @number: line number
 * Return: void
 */

void f_sub(stack_t **head, unsigned int number)
{
	stack_t *temp;
	int len = 0, sub;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	sub = temp->next->n - temp->n;
	temp->next->n = sub;
	(*head) = temp->next;
	free(temp);
}
