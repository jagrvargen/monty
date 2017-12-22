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

/**
 * sub - Subtract top element from second element
 * and store the value in the second element
 *
 * @head: A void value passed by necessity.
 * @line_number: A void value pass by necessity.
 */
void sub(stack_t **head, unsigned int line_number)
{
        stack_t *temp;
        int result = 0;

        (void) head;
        (void) line_number;

        if (manager->h == NULL || manager->h->next == NULL)
                error_print2(9);

        temp = manager->h;
        manager->h = manager->h->next;
        result = manager->h->n - temp->n;
        manager->h->n = result;
        manager->h->prev = NULL;
        free(temp);
}

/**
 * div - Divide the second element by top element in stack
 * and delete the top element
 *
 * @head: A void value passed by necessity.
 * @line_number: A void value pass by necessity.
 */
void div(stack_t **head, unsigned int line_number)
{
        stack_t *temp;
        int result = 0;

        (void) head;
        (void) line_number;

        if (manager->h == NULL || manager->h->next == NULL)
                error_print2(10);

	if (manager->h->n == 0)
		error_print3(11);

        temp = manager->h;
        manager->h = manager->h->next;
        result = (manager->h->n) / (temp->n);
        manager->h->n = result;
        manager->h->prev = NULL;
        free(temp);
}

/**
 * mul - Multiply the second element by top element in stack
 * and delete the top element
 *
 * @head: A void value passed by necessity.
 * @line_number: A void value pass by necessity.
 */
void mul(stack_t **head, unsigned int line_number)
{
        stack_t *temp;
        int result = 0;

        (void) head;
        (void) line_number;

        if (manager->h == NULL || manager->h->next == NULL)
                error_print2(12);

        temp = manager->h;
        manager->h = manager->h->next;
        result = (manager->h->n) * (temp->n);
        manager->h->n = result;
        manager->h->prev = NULL;
        free(temp);
}
