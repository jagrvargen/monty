#include "monty.h"

/**
 * add - A function which adds the first two values on stack, removes the top,
 * and stores the added value in the new top.
 *
 * @head: A void value passed by necessity.
 * @line_number: A void value pass by necessity.
 */
void add(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	int sum = 0;

	(void) head;
	(void) line_number;

	if (manager->h == NULL || manager->h->next == NULL)
		error_print2(8);

	temp = manager->h;
	manager->h = manager->h->next;
	sum += temp->n + manager->h->n;
	manager->h->n = sum;
	manager->h->prev = NULL;
	free(temp);
}

/**
 * nop - A function which does nothing.
 *
 * @head: A void value passed by necessity.
 * @line_number: A void value pass by necessity.
 */
void nop(stack_t **head, unsigned int line_number)
{
	(void)(*head);
	(void)line_number;
}
