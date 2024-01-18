#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>

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
<<<<<<< HEAD:monty.h

extern stack_t *head;
typedef void (*op_func)(stack_t **, unsigned int);

/*file operations*/
void open_file(char *file_name);
int parse_line(char *buffer, int line_number, int format);
void read_file(FILE *);
int len_chars(FILE *);
void find_func(char *, char *, int, int);

/*Stack operations*/
stack_t *create_node(int n);
void free_nodes(void);
void print_stack(stack_t **, unsigned int);
void add_to_stack(stack_t **, unsigned int);
void add_to_queue(stack_t **, unsigned int);

void call_fun(op_func, char *, char *, int, int);

void print_top(stack_t **, unsigned int);
void pop_top(stack_t **, unsigned int);
void nop(stack_t **, unsigned int);
void swap_nodes(stack_t **, unsigned int);

/*Math operations with nodes*/
void add_nodes(stack_t **, unsigned int);
void sub_nodes(stack_t **, unsigned int);
void div_nodes(stack_t **, unsigned int);
void mul_nodes(stack_t **, unsigned int);
void mod_nodes(stack_t **, unsigned int);

/*String operations*/
void print_char(stack_t **, unsigned int);
void print_str(stack_t **, unsigned int);
void rotl(stack_t **, unsigned int);

/*Error hanlding*/
void err(int error_code, ...);
void more_err(int error_code, ...);
void string_err(int error_code, ...);
void rotr(stack_t **, unsigned int);

=======
char *mon_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t mongetstdin(char **lineptr, int file);
char  *monclean_line(char *content);
void monf_push(stack_t **head, unsigned int number);
void monf_pall(stack_t **head, unsigned int number);
void monf_pint(stack_t **head, unsigned int number);
int monexecute
(char *content, stack_t **head, unsigned int counter, FILE *file);
void monfree_stack(stack_t *head);
void monf_pop(stack_t **head, unsigned int counter);
void monf_swap(stack_t **head, unsigned int counter);
void monf_add(stack_t **head, unsigned int counter);
void monf_nop(stack_t **head, unsigned int counter);
void monf_sub(stack_t **head, unsigned int counter);
void monf_div(stack_t **head, unsigned int counter);
void monf_mul(stack_t **head, unsigned int counter);
void monf_mod(stack_t **head, unsigned int counter);
void monf_pchar(stack_t **head, unsigned int counter);
void monf_pstr(stack_t **head, unsigned int counter);
void monf_rotl(stack_t **head, unsigned int counter);
void monf_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void monaddnode(stack_t **head, int n);
void monaddqueue(stack_t **head, int n);
void monf_queue(stack_t **head, unsigned int counter);
void monf_stack(stack_t **head, unsigned int counter);
>>>>>>> fe8baa956f2c2fe26403f4df651b7b94acb1b8f6:montty.h
#endif
