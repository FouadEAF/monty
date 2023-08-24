#include "monty.h"

/**
 * free_stack - free a doubly linked list.
 * @head: the head of the stack.
 * Return: no return.
 */
void free_stack(stack_t *head)
{
	stack_t *h;

	h = head;
	while (head)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
