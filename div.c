#include "monty.h"
<<<<<<< HEAD
​
=======

>>>>>>> 406340b10aa2e592c4028fa44a349c4829829f7a
/**
 * f_div - divide the first two elements form the stack
 * @head: head node
 * @number: line number
 * Return: void
 */
<<<<<<< HEAD
void f_div(stack_t **head, unsigned int number)
{

	stack_t *temp;
	
	int len = 0, div;
	
=======

void f_div(stack_t **head, unsigned int number)
{
	stack_t *temp;
	int len = 0, div;

>>>>>>> 406340b10aa2e592c4028fa44a349c4829829f7a
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
	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	div = temp->next->n / temp->n;
	temp->next->n = div;
	*head = temp->next;
	free(temp);
}
