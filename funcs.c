#include "monty.h"
/**
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
	if (manager->h == NULL)
	{
		newnode->next = manager->h;
		manager->h = newnode;
	}
	else
	{
		newnode->next = manager->h;
		newnode->next->prev = newnode;
		manager->h = newnode;
	}
}

void pall(stack_t **head, unsigned int line_number)
{
	stack_t *print;

	(void) head;
	(void) line_number;

	if (&(manager->h) == NULL || manager->h == NULL)
		return;
	print = manager->h;
	while (print != NULL)
	{
		printf("%d\n", print->n);
		print = print->next;
	}
}

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
void pop(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	(void) head;
	(void) line_number;

	if (&(manager->h) == NULL)
		error_print2(6);

	temp = manager->h;
	manager->h = manager->h->next;
	manager->h->prev = NULL;
	free(temp);
}

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
