#include "monty.h"

/**
 * addnode - add node to the stack
 * @head: head of the stack
 * @n: new value
 * Return: no return
 */

void addnode(stack_t **head, int n)
{
	stack_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	if (temp)
	{
		temp->prev = new_node;
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
}
