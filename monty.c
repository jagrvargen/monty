#include "monty.h"

manager_t *manager;

/**
 * main - The calling function of the monty interpreter program.
 *
 * @argc: An integer count of arguments passed to the command line.
 * @argv: A pointer to an array of pointers to command line argument strings.
 *
 * Return: An integer 0 for success.
 */
int main(int argc, char *argv[])
{
	manager_t control = { NULL, 1, NULL, NULL, 0, NULL };

	manager = &control;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	manager->file_name = argv[1];

	manager->fp = fopen(argv[1], "r");
	if (!manager->fp)
		error_print(1);

	access_file();

	return (0);
}
