#include "monty.h"
/**
 */
stack_t *push(stack_t **head, int n)
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

stack_t *pall(stack_t *head)
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
