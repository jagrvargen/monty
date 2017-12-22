#include "monty.h"

/**
 * access_file - Reads lines from a file and passes to a parser function.
 *
 */
void access_file(void)
{
	ssize_t read = 0;
	size_t len = 0;

	if (manager->fp == NULL)
		error_print(1);

	while (read != EOF)
	{
		read = getline(&(manager->l), &len, manager->fp);
		if (read != EOF)
		{
			(manager->l_n)++;
			parse_line();
		}
	}
	if (read == EOF)
		free_manager();
}
