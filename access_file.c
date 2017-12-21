#include "monty.h"

/**
 */
void access_file(char *file_name)
{
	size_t len = 0;
	ssize_t read = 0;

	manager->fp = fopen(file_name, "r");
        if (manager->fp == NULL)
	{
		printf("Error: Can't open file %s\n", file_name);
                exit(EXIT_FAILURE);
	}
	while (read != EOF)
	{
		printf("check 1 access\n");
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
