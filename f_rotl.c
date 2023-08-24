#include "monty.h"

/**
  * rotl - rotate the stack to the top.
  * @head: the head of the stack.
  * @nbLine: unsed item.
  * Return: no return.
  */
void rotl(stack_t **head, __attribute__((unused)) unsigned int nbLine)
{
	stack_t *tmp_head = *head, *h;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	h = (*head)->next;
	h->prev = NULL;
	while (tmp_head->next != NULL)
	{
		tmp_head = tmp_head->next;
	}

	tmp_head->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp_head;
	(*head) = h;
}
