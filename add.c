#include "monty.h"

/**
 * f_add - add the top two elements of stack
 * @head: head node
 * @number: line number
 * Return: void
 */

void f_add(stack_t **head, unsigned int number)
{
	stack_t *temp;
	int len = 0;
	int sum;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%u: can't add, stack too short", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	sum = temp->n + temp->next->n;
	temp->next->n = sum;
	*head = temp->next;
	free(temp);
}
