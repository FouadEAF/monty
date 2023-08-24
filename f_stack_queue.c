#include "monty.h"

/**
 * stack - set the format of the data to a stack (LIFO).
 * @head: the head of the stack
 * @nbLine: the number of line
 * Return: no return
 */
void stack(stack_t **head, unsigned int nbLine)
{
	(void)head;
	(void)nbLine;
	bus.lifi = 0;
}

/**
 * queue - set the format of the data to a queue (FIFO).
 * @head: the head of the stack.
 * @nbLine: the number of line.
 * Return: no return.
 */
void queue(stack_t **head, unsigned int nbLine)
{
	(void)head;
	(void)nbLine;
	bus.lifi = 1;
}
