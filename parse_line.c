#include "monty.h"

/**
 */
void parse_line(void)
{
	unsigned int i = 0;
	char *token = NULL;
	const char *space = " ";
	stack_t *head = NULL;
	unsigned int l_num = 0;

	instruction_t stack_operations[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{NULL, NULL}
	};

	token = strtok(manager->l, space);
/*	if (token == NULL || token == '\0');
 */
	while (stack_operations[i++].opcode != NULL)
	{
		if (strcmp(token, stack_operations[i].opcode) == 0)
		{
			if (i == 0)
			{
				token = strtok(manager->l, space);
				if (isdigit(atoi(token)))
				{
					manager->n = *token;
					stack_operations[i].f(&head, l_num);
				}
			}
			else
				stack_operations[i].f(&head, l_num);
		}
	}
/*	if (stack_operations == NULL)
 */
}
