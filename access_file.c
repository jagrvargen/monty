#include "monty.h"

/**
 */
ssize_t access_file(char *file_name)
{
	FILE *fp;
	size_t len = 0, line_count = 1;
	char *line = NULL;
	ssize_t read, error;

	fp = fopen(file_name, "r");
        if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", *file_name);
                exit(EXIT_FAILURE);
	}
	while ((read = getline(&line, &len, fp)) != EOF)
	{
		error = parse_line(&line, len, line_count);
		//Pass error to an error handling function and figure out how
		//to free line.
		line_count++;
        }

	error = fclose(file_name);
	return (read);
}
