#include "monty.h"

/**
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
			parse_line();
			(manager->l_n)++;
		}
        }
	if (read == EOF)
		free_manager();
}
