#include "monty.h"
/**
 * mod - Compute the rest of the division of second element
 * by the top element in stack.
 *
 * @head: A void value passed by necessity.
 * @line_number: A void value pass by necessity.
 */
void mod(stack_t **head, unsigned int line_number)
{
        stack_t *temp;
        int result = 0;
	int remain;

        (void) head;
        (void) line_number;

        if (manager->h == NULL || manager->h->next == NULL)
                error_print3(13);

        if (manager->h->n == 0)
                error_print3(11);

	temp = manager->h;
        manager->h = manager->h->next;
	remain = (manager->h->n) % (temp->n)
        result = ((manager->h->n) / (temp->n) + 1) * (temp->n) - remain;
        manager->h->n = result;
        manager->h->prev = NULL;
        free(temp);
}
