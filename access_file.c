#include "monty.h"

/**
 */
ssize_t access_file(char *file_name)
{
	FILE *fp;
	size_t len = 0, line_count = 1;
	char *line = NULL;
	ssize_t read;

	fp = fopen(file_name, "r");
        if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", file_name);
                exit(EXIT_FAILURE);
	}
	while (read != EOF)
	{
		read = getline(&line, &len, fp))
		parse_line(line, len, line_count, fp);
		line_count++;
        }
          //success
}
