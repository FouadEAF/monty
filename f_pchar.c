#include "monty.h"

/**
 * pchar - print the char at the top of the stack.
 * @head: the head of the stack.
 * @nbLine: the number of line.
 * Return: no return.
 */
void pchar(stack_t **head, unsigned int nbLine)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", nbLine);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", nbLine);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", h->n);
}
