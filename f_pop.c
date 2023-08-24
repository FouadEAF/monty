#include "monty.h"

/**
 * pop - prints the top.
 * @head: the head of the stack.
 * @nbLine: the number of line.
 * Return: no return.
 */
void pop(stack_t **head, unsigned int nbLine)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", nbLine);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
