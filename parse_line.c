#include "monty.h"

/**
 */
void parse_line(void)
{
	unsigned int i = 0;
	char *token = NULL;
	char *space = " '\n''\t'";

	instruction_t stack_operations[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	token = strtok(manager->l, space);
	while (token == NULL)
	{
		access_file();
	}

	while (stack_operations[i].opcode != NULL)
	{
		if (strcmp(token, stack_operations[i].opcode) == 0)
		{
			if (i == 0)
			{
				token = strtok(NULL, space);
				if (token == NULL)
					free_manager();
				if (atoi(token))
				{
					manager->n = atoi(token);
					stack_operations[i].f(NULL, 0);
				}
			}
			else
			{
				stack_operations[i].f(NULL, 0);
			}
		}
		i++;
	}
	if (stack_operations == NULL)
		exit(EXIT_FAILURE);
}
