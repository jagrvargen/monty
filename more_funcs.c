#include "monty.h"
void add(stack_t **head, unsigned int line_number)
{
	stack_t *temp;
	int sum = 0;

	(void) head;
	(void) line_number;

	if (manager->h == NULL || manager->h->next == NULL)
		error_print(6);		/*Stack too short to add top two elements*/

	temp = manager->h;
	manager->h = manager->h->next;
	sum += temp->n + manager->h->n;
	manager->h->n = sum;
	manager->h->prev = NULL;
	free(temp);
}
void nop(stack_t **head, unsigned int line_number)
{
	(void)(*head);
	(void)line_number;
}
