#include "monty.h"

/**
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	access_file(argv[1]);

	return (0);
}
