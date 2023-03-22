#include "monty.h"

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
			fprintf(stderr, "L%d: usage: push integer\n", number);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
	       	fprintf(stderr, "L%d: usage: push integer\n", number);
	       	fclose(bus.file);
	       	free(bus.content);
	       	free_stack(*head);
	       	exit(EXIT_FAILURE);
	}
	n = atoi(bus.arg);
	if (bus.lifi == 1)
		addnode(head, n);
	else
		addqueue(head, n);
}