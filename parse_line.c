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
		access_file();
	while (stack_operations[i].opcode != NULL)
	{
		if (strcmp(token, stack_operations[i].opcode) == 0)
		{
			if (i == 0)
			{
				token = strtok(NULL, space);
				if (token)
				{
					manager->n = atoi(token);
					stack_operations[i].f(NULL, 0);
					access_file();
				}
				else
					error_print(4);
			}
			else
			{
				stack_operations[i].f(NULL, 0);
				access_file();
			}
		}
		i++;
	}
	error_print(2);
}
