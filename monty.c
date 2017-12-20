#include "monty.h"

/**
 */
int main(int argc, char *argv[])
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	FILE *fp;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
		exit(EXIT_FAILURE);

	while ((read = getline(&line, &len, fp)) != -1) {
		
	}
}
