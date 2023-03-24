#include "monty.h"

<<<<<<< HEAD
/**
 * f_add - add the top two elements of stack
 * @head: head node
 * @number: line number
 * Return: void
 */

void f_add(stack_t **head, unsigned int number)
{
	stack_t *temp;
	int len = 0, sum;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", number);
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
=======
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
>>>>>>> israel
}
