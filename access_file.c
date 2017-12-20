#include "monty.h"

/**
 */
ssize_t access_file(char *file_name)
{
	size_t len = 0;
	ssize_t read = 0, error;

	manager->f = fopen(file_name, "r");
        if (manager->f == NULL)
	{
		printf("Error: Can't open file %s\n", file_name);
                exit(EXIT_FAILURE);
	}
	while (read != EOF)
	{
		read = getline(&manager->l, &len, manager->f);
		parse_line(len);
		manager->l_n++;
        }
	if (read == EOF)
	{
		/* free stack function */
		free(manager->l_n);
		free(manager->l);
		free(manager->n);
		error = fclose(manager->f);
		if !(error)
			exit(EXIT_FAILURE); /* Verify no message */
	}
}
