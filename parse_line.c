#include "monty.h"

/**
 */
ssize_t parse_line(char **line, size_t len, size_t line_number)
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
	while (token != NULL && token != '\n')
		token = strtok(*line, space);
	
}
