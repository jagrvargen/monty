#include "monty.h"

/**
 */
void access_file(char *file_name)
{
	ssize_t read = 0;
	size_t len = 0;

        if (manager->fp == NULL)
	{
		printf("Error: Can't open file %s\n", file_name);
		free(manager);
                exit(EXIT_FAILURE);
	}
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
