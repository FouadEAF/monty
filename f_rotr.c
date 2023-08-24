#include "monty.h"

/**
  * rotr - rotate the stack to the bottom.
  * @head: the head of the stack.
  * @nbLine: unsed item.
  * Return: no return.
  */
void rotr(stack_t **head, __attribute__((unused)) unsigned int nbLine)
{
	stack_t *tmp_head;

	tmp_head = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}

	while (tmp_head->next)
	{
		tmp_head = tmp_head->next;
	}

	tmp_head->next = *head;
	tmp_head->prev->next = NULL;
	tmp_head->prev = NULL;
	(*head)->prev = tmp_head;
	(*head) = tmp_head;
}
