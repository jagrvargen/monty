#include "monty.h"
/**
 */
void push(stack_t **head, unsigned int line_number)
{
	stack_t *newnode;
	printf("check push\n");
	(void) head;
	(void) line_number;

	if (&(manager->h) == NULL)
		free_manager();
	printf("check push 2\n");
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		printf("check push 3\n");
		free_manager();
		exit(EXIT_FAILURE);
	}
	newnode->n = manager->n;
	newnode->prev = NULL;
	printf("manager->n is %d\n", manager->n);
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

	if (&(manager->h) == NULL)
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
	printf("check pint\n");
	(void) head;
	(void) line_number;

        if (manager->h == NULL)
		error_print(3);

	print = manager->h;
	while (print != NULL)
	{
		printf("%d\n", print->n);
	}
}
void pop(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	(void) head;
	(void) line_number;

	if (head == NULL || *head == NULL)
		error_print(4);

	temp = manager->h->next;
	free(manager->h);
	manager->h = temp;
	manager->h->prev = NULL;
}

void swap(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	int temp_num;

	(void) head;
	(void) line_number;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
	{
		error_print(5); /*Stack is less than 2 nodes long*/
	}
	temp = (*head)->next;
	temp_num = (*head)->n;
	(*head)->n = temp->n;
	temp->n = temp_num;
}
