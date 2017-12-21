#include "monty.h"

/**
 * parse_line - A function which parses the lines read from FILE.
 *
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
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	token = strtok(manager->l, space);
	while (token == NULL || token == '\0')
	{
		printf("check token\n");
		access_file();
	}
	while (stack_operations[i].opcode != NULL)
	{
		if (strcmp(token, stack_operations[i].opcode) == 0)
		{
			if (i == 0)
			{
				token = strtok(NULL, space);
				if (atoi(token))
				{
					manager->n = atoi(token);
					stack_operations[i].f(NULL, 0);
				}
				else
					error_print(4);
			}
			else
				stack_operations[i].f(NULL, 0);
		}
		i++;
	}
	error_print(2);
}
