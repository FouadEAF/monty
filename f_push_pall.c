#include "monty.h"

/**
 * add_node - add node to the head stack.
 * @head: the head of the stack.
 * @n: new_value.
 * Return: no return.
 */
void add_node(stack_t **head, int n)
{
	stack_t *size_stack, *h;

	h = *head;
	size_stack = malloc(sizeof(stack_t));

	if (size_stack == NULL)
	{ printf("Error\n");
		exit(0); }
	if (h)
		h->prev = size_stack;

	size_stack->n = n;
	size_stack->next = *head;
	size_stack->prev = NULL;
	*head = size_stack;
}

/**
 * add_queu - add node to the tail of stack.
 * @head: the head of the stack.
 * @n: new_value.
 * Return: no return.
 */
void add_queu(stack_t **head, int n)
{
	stack_t *size_stack, *h;

	h = *head;
	size_stack = malloc(sizeof(stack_t));
	if (size_stack == NULL)
	{
		printf("Error\n");
	}
	size_stack->n = n;
	size_stack->next = NULL;
	if (h)
	{
		while (h->next)
			h = h->next;
	}
	if (!h)
	{
		*head = size_stack;
		size_stack->prev = NULL;
	}
	else
	{
		h->next = size_stack;
		size_stack->prev = h;
	}
}

/**
 * push - push node to stack.
 * @head: the head of stack.
 * @nbLine: line number.
 * Return: no return.
 */
void push(stack_t **head, unsigned int nbLine)
{
	int a, i = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			i++;
		for (; bus.arg[i] != '\0'; i++)
		{
			if (bus.arg[i] > 57 || bus.arg[i] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", nbLine);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", nbLine);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = atoi(bus.arg);
	if (bus.lifi == 0)
		add_node(head, a);
	else
		add_queu(head, a);
}

/**
 * pall - print all the stack.
 * @head: the head of stack.
 * @nbLine: unsed item.
 * Return: no return.
 */
void pall(stack_t **head, __attribute__((unused)) unsigned int nbLine)
{
	stack_t *h;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
