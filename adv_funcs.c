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

        (void) head;
        (void) line_number;

        if (manager->h == NULL || manager->h->next == NULL)
                error_print3(13);

        if (manager->h->n == 0)
                error_print3(11);

	temp = manager->h;
        manager->h = manager->h->next;
	result = (manager->h->n) % (temp->n);
        manager->h->n = result;
        manager->h->prev = NULL;
	free(temp);
}

void pchar(stack_t **head, unsigned int line_number)
{

	(void) head;
	(void) line_number;

	if (manager->h == NULL)
		error_print3(14);

	if (manager->h->n < 0 || manager->h->n > 127)
		error_print3(15);

	putchar(manager->h->n + '0');
	putchar('\n');
}

void pstr(stack_t **head, unsigned int line_number)
{
	(void) head;
	(void) line_number;

	while (manager->h->n != 0 && manager->h != NULL)
	{
		if ((manager->h->n >= 97 && manager->h->n <= 122) ||
				(manager->h->n >= 65 && manager->h->n <= 90))
			putchar(manager->h->n);
		else
			break;
		manager->h = manager->h->next;
	}
	printf("\n");
}

void rotl(stack_t **head, unsigned int line_number)
{
	stack_t *search;
	stack_t *hold;

	(void) head;
	(void) line_number;

	if (manager->h == NULL || manager->h->next == NULL)
		return;

	search = manager->h;
	hold = manager->h->next;
	while (search->next != NULL)
		search = search->next;
	search->next = manager->h;
	hold->prev = NULL;
	manager->h->next = NULL;
	manager->h = hold;
}
