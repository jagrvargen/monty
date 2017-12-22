#include "monty.h"

/**
 * parse_line - A function which parses the lines read from FILE.
 *
 */
void parse_line(void)
{
	size_t i = 0;
	char *token = NULL;
	char *space = " '\n'";
	instruction_t stack_operations[] = { {"push", push}, {"pall", pall},
                {"pint", pint}, {"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	token = strtok(manager->l, space);
	if (!token)
		return;
	while (stack_operations[i].opcode != NULL)
	{
		if (strcmp(token, stack_operations[i].opcode) == 0)
		{
			if (i == 0)
			{
				token = strtok(NULL, space);
				if (!token)
					error_print(4);
				push_check(token);
				manager->n = atoi(token);
				stack_operations[i].f(NULL, 0);
			}
			else
			{
				stack_operations[i].f(NULL, 0);
			}
			break;
		}
		i++;
	}
	if (stack_operations[i].opcode == NULL)
		error_print(2);
}

void push_check(char *token)
{
	size_t i = 0;

	if (token[0] == '-')
		i++;
	for (; token[i] != '\0'; i++)
	{
		if (!(isdigit(token[i])))
		    error_print(4);
	}
}
