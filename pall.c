#include "monty.h"

/**
 * f_pall - prints all values of the stack
 * starting from the top of stack
 * @head: the top of stack
 * @number: the line of the instruction
 */
void f_pall(stack_t **head, unsigned int number)
{
	stack_t *temp;
	(void)number;

	temp = *head;

	while(temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
