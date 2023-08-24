#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct bus_s - guide the stack.
 * @arg: value.
 * @file: pointer to monty file.
 * @content: line content.
 * @lifi: flag change stack <-> queue.
 * Description: carries values through the program.
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;

extern bus_t bus;

void free_stack(stack_t *head);
void add_node(stack_t **head, int n);
void add_queu(stack_t **head, int n);
void push(stack_t **head, unsigned int nbLine);
void pall(stack_t **head, __attribute__((unused)) unsigned int nbLine);
void pint(stack_t **head, unsigned int nbLine);
void pop(stack_t **head, unsigned int nbLine);
void swap(stack_t **head, unsigned int nbLine);
void add(stack_t **head, unsigned int nbLine);
void nop(stack_t **head, unsigned int nbLine);
void sub(stack_t **head, unsigned int nbLine);
void div_fun(stack_t **head, unsigned int nbLine);
void mul(stack_t **head, unsigned int nbLine);
void mod(stack_t **head, unsigned int nbLine);
void comments(stack_t ** head, unsigned int nbLine);
void pchar(stack_t **head, unsigned int nbLine);
void pstr(stack_t **head, __attribute__((unused)) unsigned int nbLine);
void rotl(stack_t **head, __attribute__((unused)) unsigned int nbLine);
void rotr(stack_t **head, __attribute__((unused)) unsigned int nbLine);
void stack(stack_t **head, unsigned int nbLine);
void queue(stack_t **head, unsigned int nbLine);

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
int run(char *content, stack_t **head, unsigned int nbLine, FILE *file);

#endif
