#include "monty.h"
/**
 */
void push(stack_t **head, unsigned int line_number)
{
	stack_t *newnode;

	head = manager->h;
	line_number = manager->l_n;
	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = numero;
	newnode->prev = NULL;
	if (*head == NULL)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = *head;
		newnode->next->prev = newnode;
		*head = newnode;
	}
}

void pall(stack_t **head, unsigned int line_number)
{
	stack_t *print;

	if (head == NULL || *head == NULL)
		return;
	print = *head;
	while (print != NULL)
	{
		printf("%d\n", print->n);
		print = print->next;
	}
}
