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
		exit(EXIT_FAILURE);
	}

	manager->fp = fopen(argv[1], "r");
	if (manager->fp == NULL)
        {
                printf("Error: Can't open file %s\n", argv[1]);
                free(manager);
                exit(EXIT_FAILURE);
        }

	access_file(argv[1]);

	return (0);
}
