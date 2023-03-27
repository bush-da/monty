#include "monty.h"

/**
 * f_rotr - rotates the stack
 * @head: the stack
 * @counter: the line number
 */

void f_rotr(stack_t **head, unsigned int counter)
{
	stack_t *current, *temp;

	(void)counter;
	current = *head;
	temp = *head;
	if (*head == NULL || (*head)->next == NULL)
		return;
	while (current->next)
		current = current->next;
	temp = current;
	current = current->prev;
	current->next = NULL;
	temp->next = *head;
	(*head)->prev = temp;
	temp->prev = NULL;
	*head = temp;
}
