#include "monty.h"

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
