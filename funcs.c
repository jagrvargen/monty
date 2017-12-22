#include "monty.h"
/**
 * push - A function which pushes a node to the top of a stack.
 *
 * @head: A void value passed by necessity.
 * @line_number: A void value pass by necessity.
 */
void push(stack_t **head, unsigned int line_number)
{
	stack_t *newnode;

	(void) head;
	(void) line_number;

	if (&(manager->h) == NULL)
		exit(EXIT_FAILURE);

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
		error_print(3);
	newnode->n = manager->n;
	newnode->prev = NULL;
	newnode->next = manager->h;
	manager->h = newnode;
	if (newnode->next != NULL)
		newnode->next->prev = newnode;
}

/**
 * pall - A function which prints all the integer values on the stack.
 *
 * @head: A void value passed by necessity.
 * @line_number: A void value pass by necessity.
 */
void pall(stack_t **head, unsigned int line_number)
{
	stack_t *print;

	(void) head;
	(void) line_number;
	printf("check pall\n");
	if (!manager->h)
		return;
	print = manager->h;
	while (print != NULL)
	{
		printf("%d\n", print->n);
		print = print->next;
	}
}

/**
 * pint - A function which prints the value of the top member of the stack
 *
 * @head: A void value passed by necessity.
 * @line_number: A void value pass by necessity.
 */
void pint(stack_t **head, unsigned int line_number)
{
	stack_t *print;

	(void) head;
	(void) line_number;

	if (manager->h == NULL)
		error_print(5);

	print = manager->h;
	printf("%d\n", print->n);
}

/**
 * pop - A function which removes the top member of the stack.
 *
 * @head: A void value passed by necessity.
 * @line_number: A void value pass by necessity.
 */
void pop(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	(void) head;
	(void) line_number;

	if (manager->h == NULL)
		error_print2(6);

	temp = manager->h;
	manager->h = manager->h->next;
	manager->h->prev = NULL;
	free(temp);
}

/**
 * swap - A function which swaps the top two members of the stack.
 *
 * @head: A void value passed by necessity.
 * @line_number: A void value pass by necessity.
 */
void swap(stack_t **head, unsigned int line_number)
{
	int temp_num;

	(void) head;
	(void) line_number;

	if (manager->h == NULL || manager->h->next == NULL)
		error_print2(7); /*Stack is less than 2 nodes long*/

	temp_num = manager->h->n;
	manager->h->n = manager->h->next->n;
	manager->h->next->n = temp_num;
}
