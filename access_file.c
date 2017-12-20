#include "monty.h"

/**
 */
ssize_t access_file(char *file_name)
{
	FILE *fp;
	size_t len = 0, line_count = 0;
	char *line;
	ssize_t read, error;

	fp = fopen(file_name, "r");
        if (fp == NULL)
                exit(EXIT_FAILURE);

	while ((read = getline(&line, &len, fp)) != -1)
	{
		error = parse_line(&line, len);
		//Pass error to an error handling function and figure out how
		//to free line.
		line_count++;
        }

	fclose(file_name);
	return (read);
}
