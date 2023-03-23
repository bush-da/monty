#include "monty.h"

void f_add(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int num;

	if (*head)
	{
		temp = (*head)->next;
		if (temp)
		{
			num = (*head)->n;
			free(*head);
			temp->n += num;
			temp->prev = NULL;
			*head = temp;
			return;
		}
	}
	fprintf(stderr, "L%d: can't add, stack too short\n", counter);
	fclose(bus.file);
	free(bus.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
}
