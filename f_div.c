#include "monty.h"

/**
 * div_fun - divide the top two elements of the stack.
 * @head: the head of the stack.
 * @nbLine: the number of line.
 * Return: no return.
 */
void div_fun(stack_t **head, unsigned int nbLine)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", nbLine);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", nbLine);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	j = h->next->n / h->n;
	h->next->n = j;
	*head = h->next;
	free(h);
}
