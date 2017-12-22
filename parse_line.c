#include "monty.h"

/**
 * parse_line - A function which parses the lines read from FILE.
 *
 */
void parse_line(void)
{
	size_t i = 0;
	char *space = " '\n'";
	instruction_t stack_operations[] = {
		{"push", push},
		{"pall", pall},
                {"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"mul", mul},
		{"mod", mod},
		{"div", _div},
		{"sub", sub},
		{"#", nop},
		{"pchar", pchar},
		{NULL, NULL}
	};

	manager->toke = strtok(manager->l, space);
	if (!manager->toke)
		return;
	while (stack_operations[i].opcode != NULL)
	{
		if (strcmp(manager->toke, stack_operations[i].opcode) == 0)
		{
			if (i == 0)
			{
				manager->toke = strtok(NULL, space);
				if (!manager->toke)
					error_print(4);
				push_check(manager->toke);
				manager->n = atoi(manager->toke);
				stack_operations[i].f(NULL, 0);
			}
			else
				stack_operations[i].f(NULL, 0);
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
