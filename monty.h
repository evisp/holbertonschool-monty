#ifndef _MONTY_H_
#define _MONTY_H_

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>

extern int n, number;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* error_handler functions */
void error_arguments(void);
void open_error(char **);
void invalidInstruction_error(char *invInstruction, unsigned int line);
void not_int_err(unsigned int line);
void malloc_error(void);

/* error handler 2 */
void pint_error(unsigned int line);
void pop_error(unsigned int line);
void swap_error(unsigned int line);
void add_error(unsigned int line);
void sub_error(unsigned int line);

/* error_handler3 */
void div_error(unsigned int line);
void div_error2(unsigned int line);
void mul_error(unsigned int line);
void mod_error(unsigned int line);
/*error handler4*/
void pchar_error(unsigned int line);
void pchar_error2(unsigned int line);

/* executer functions*/
void open_and_read(char **argv);
int is_number(char *token);
int is_comment(char *token, int line_counter);
char *trim_spaces(char *str);

/*opcodes */
void (*get_op_code(char *token, unsigned int line)) (stack_t **, unsigned int);


/* Stack */
void _push(stack_t **top, unsigned int line);
void _pall(stack_t **top, unsigned int line);
void _pint(stack_t **top, unsigned int line);
void _pop(stack_t **top, unsigned int line);
void _free(stack_t *top);

/* stack operations */
void _swap(stack_t **top, unsigned int line);
void _add(stack_t **top, unsigned int line);
void _sub(stack_t **top, unsigned int line);
void _div(stack_t **top, unsigned int line);
void _mul(stack_t **top, unsigned int line);

/* stack 3 */
void _mod(stack_t **top, unsigned int line);
void _rotl(stack_t **top, unsigned int line);
void _rotr(stack_t **top, unsigned int line);
void _nop(stack_t **top, unsigned int line);
void _pchar(stack_t **top, unsigned int line);

/*stack4 */
void _pstr(stack_t **top, unsigned int line);

#endif /* _MONTY_H_ */
