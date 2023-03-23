#include "monty.h"

/**
 * push_error - print error message in stderr
 * @head: head node
 * @number: number that error occured
 * Return: void
 */

void push_error(stack_t **head, int number)
{
	fprintf(stderr, "L%d: usage: push integer\n", number);
	fclose(bus.file);
	free(bus.content);
	free_stack(*head);
	exit(EXIT_FAILURE);
}

/**
 * f_push - push element to the top of stack or tail in case of queue
 * @head: head node
 * @number: data that going to be push to stack
 * Return: void
 */

void f_push(stack_t **head, unsigned int number)
{
	int n, j = 0, flag = 0;


	if (bus.arg)
	{

		if (bus.arg[0] == '-')
			j++;
		while(bus.arg[j] != '\0')
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1;
			j++;
		}
		if (flag == 1)
		{
			push_error(head, number);
		}
	}
	else
	{
		push_error(head, number);
	}
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
