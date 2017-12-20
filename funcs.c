#include "monty.h"
/**
 */
void (*push)(stack_t **head, unsigned int line_number)
{
	stack_t *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(stack_t));
	newnode->n = n;
	if ((*head) == NULL)
	{
		newnode->prev = NULL;
		newnode->next = (*head);
		(*head) = newnode;
	}
	else
	{
		newnode->prev = NULL;
		newnode->next = (*head);
		(*head)->prev = newnode;
		(*head) = newnode;
	}
}
void (*pall)(stack_t *head, unsigned int line_number)
{
	if (head == NULL)
		printf("\n");
	else
		while (head != NULL)
		{
			printf("%d\n", head->n);
			head = head->next;
		}
}
void (*pint)(stack_t *head, unsigned int line_number)
{
        if ((*head) == NULL)
        {
	        func_error(3, line_number);
	}
	else
                while (head != NULL)
                {
                        printf("%d\n", head->n);
                }
}
