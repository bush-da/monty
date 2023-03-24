#include "monty.h"

/**
 * f_rotl - rotates the stack to the top
 * @head: head node
 * @number: line number
 * Return: void
 */

void f_rotl(stack_t **head, unsigned int number)
{
	(void)number;
	stack_t *temp;
	stack_t *temp1;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	temp1 = (*head)->next;
	temp1->prev = NULL;
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = temp1;
}
