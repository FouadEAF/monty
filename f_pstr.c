#include "monty.h"

/**
 * pstr - print the string starting at the top of the stack.
 * @head: the head of the stack.
 * @nbLine: unsed item.
 * Return: no return.
 */
void pstr(stack_t **head, __attribute__((unused)) unsigned int nbLine)
{
	stack_t *h;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
