#include "monty.h"

/**
 * swap - swap the top two elements of the stack.
 * @head: the head of the stack.
 * @nbLine: the number of line.
 * Return: no return.
 */
void swap(stack_t **head, unsigned int nbLine)
{
	stack_t *h;
	int i = 0, j;

	h = *head;
	while (h)
	{
		h = h->next;
		i++;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", nbLine);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	j = h->n;
	h->n = h->next->n;
	h->next->n = j;
}
