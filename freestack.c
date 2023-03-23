#include "monty.h"

/**
 * free_stack - free all node in stack
 * @head: address of head node
 * Return: void
 */

void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
