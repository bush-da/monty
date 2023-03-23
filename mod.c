#include "monty.h"

/**
 * f_mod - mod the first two elements form the stack
 * @head: head node
 * @number: line number
 * Return: void
 */

void f_mod(stack_t **head, unsigned int number)
{
	stack_t *temp;
	int len = 0, mod;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	mod = temp->next->n % temp->n;
	temp->next->n = mod;
	*head = temp->next;
	*head->prev = NULL;
	free(temp);
}
