#include "monty.h"

/**
 * f_pstr - prints a string
 * @head: head node
 * @number: line number
 * Return: void
 */

void f_pstr(stack_t **head, unsigned int number)
{
	stack_t *temp;

	temp = *head;
	while (temp)
	{
		if (temp->n > 127 || temp->n <= 0)
			break;
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
