#include "monty.h"

/**
 */
ssize_t parse_line(char *line, size_t len, size_t line_number)
{
	ssize_t error;
	unsigned int i = 0;
	char *token;
	const char *space = " ";

	instruction_t stack_operations[] = {
		{'push', push},
		{'pall', pall},
		{NULL, NULL}
	};

	token = strtok(line, space);
	if (token != NULL && token != '\0')
	{
		while (stack_operations[i++] != NULL)
		{
			if (strcmp(token, stack_operations[i].opcode) == 0)
			{
				if (i == 0)
					/* handle push */
				else
					stack_operations[i].f();
			}
		}
	}
}
