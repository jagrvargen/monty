#include "monty.h"
void add(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	if (head == NULL || *head == NULL || (*head)->next == NULL)
		func_error(6, line_number);		//Stack too short to add top two elements

	temp = (*head)->next;
	temp->n = temp->n + (*head)->n;
	free(*head);
	(*head) = temp;
	(*head)->prev = NULL;
}
void nop(stack_t **head, unsigned int line_number)
{
	(void)(*head);
	(void)line_number;
}
