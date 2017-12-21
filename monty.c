#include "monty.h"

manager_t *manager;

/**
 */
int main(int argc, char *argv[])
{
	manager_t control = { NULL, 1, NULL, NULL, 0 };

	manager = &control;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		free(control);
		exit(EXIT_FAILURE);
	}

	access_file(argv[1]);

	return (0);
}
