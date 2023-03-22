#include "monty.h"


void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *temp;

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
	else
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		free(bus.content);
		fclose(bus.file);
		exit(EXIT_FAILURE);
	}
}
