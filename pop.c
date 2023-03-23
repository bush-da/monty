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
			temp->prev = NULL;
		}
		*head = temp;
		return;
	}
	else
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		free(bus.content);
		fclose(bus.file);
		exit(EXIT_FAILURE);
	}
}
