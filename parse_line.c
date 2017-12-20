#include "monty.h"

/**
 */
ssize_t parse_line(char *line, size_t len, size_t line_number)
{
	ssize_t error;
	unsigned int i = 0;
	char *token;
	const char *space = " ";
	int numero;

	instruction_t stack_operations[] = {
		{'push', push},
		{'pall', pall},
		{'pint', pint}
		{NULL, NULL}
	};

	token = strtok(line, space);
	if (token == NULL || token == '\0');
		//error function
	while (stack_operations[i++] != NULL)
	{
		if (strcmp(token, stack_operations[i].opcode) == 0)
		{
			if (i == 0)
			{
				if (token = strtok(line, space)\
				    != NULL && isdigit(token))
				{
					numero = token;
					stack_operations[i].f();
				}
			}
			else
				stack_operations[i].f();
		}
	}
	if (stack_operations == NULL)
		//error function
}
