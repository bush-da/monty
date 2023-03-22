#include "monty.h"


void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	(void)counter;

	if (*head)
	{
		temp = (*head)->next;
		free(*head);
		if (temp)
		{
			*head = temp;
			temp->prev = NULL;
		}
		else
			*head = NULL;
	}
}
