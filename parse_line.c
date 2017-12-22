#include "monty.h"

/**
 * parse_line - A function which parses the lines read from FILE.
 *
 */
void parse_line(void)
{
	unsigned int i = 0;
	char *token = NULL;
	char *space = " '\n'";
	instruction_t stack_operations[] = { {"push", push}, {"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	token = strtok(manager->l, space);
	if (token == NULL)
	{
		free(manager->l);
		access_file();
	}
	while (stack_operations[i].opcode != NULL)
	{
		if (strcmp(token, stack_operations[i].opcode) == 0)
		{
			if (i == 0)
			{
				token = strtok(NULL, space);
				push_check(token);
				manager->n = atoi(token);
				stack_operations[i].f(NULL, 0);
				free(manager->l);
				access_file();
			}
			else
			{
				stack_operations[i].f(NULL, 0);
				free(manager->l);
				access_file();
			}
		}
		i++;
	}
	error_print(2);
}

void push_check(char *token)
{
	size_t i;

	for (i = 0; token[i] != '\0'; i++)
	{
		if (token[i] != '-' && !isdigit(token[i]))
			error_print(4);
	}
}
