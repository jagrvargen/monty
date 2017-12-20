#include "monty.h"

manager_t *manager;

/**
 */
int main(int argc, char *argv[])
{
	stack_t *head = NULL;
	unsigned int line_number = 1;
	FILE *fp = NULL;
	char *line = NULL;
	int numero = 0;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	access_file(argv[1]);

	return (0);
}
