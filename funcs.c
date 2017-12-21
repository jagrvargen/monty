#include "monty.h"
/**
 */
void push(stack_t **head, unsigned int line_number)
{
	stack_t *newnode;

	(void) head;
	(void) line_number;

	if (manager->h == NULL)
		free_manager();

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		free_manager();
		exit(EXIT_FAILURE);
	}
	newnode->n = manager->n;
	newnode->prev = NULL;
	if (*manager->h == NULL)
	{
		newnode->next = *manager->h;
		*manager->h = newnode;
	}
	else
	{
		newnode->next = *manager->h;
		newnode->next->prev = newnode;
		*manager->h = newnode;
	}
}

void pall(stack_t **head, unsigned int line_number)
{
	stack_t *print;

	(void) head;
	(void) line_number;

	if (*manager->h == NULL)
		return;
	print = *manager->h;
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

        if (*manager->h == NULL)
		error_print(3);

	print = *(manager->h);
	while (print != NULL)
	{
		printf("%d\n", print->n);
	}
}
