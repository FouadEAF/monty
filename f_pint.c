#include "monty.h"

/**
 * pint - print the top stack.
 * @head: the head of the stack.
 * @nbLine: the number of line.
 * Return: no return.
*/
void pint(stack_t **head, unsigned int nbLine)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", nbLine);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
