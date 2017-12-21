#include "monty.h"

/**
 * free_manager - A function which frees malloc'd memory and closes an open
 * file.
 */
void free_manager(void)
{
	ssize_t error;

	while (manager->h != NULL)
	{
		free(manager->h);
		manager->h = manager->h->next;
	}
	free(manager->h);

	free(manager->l);

	error = fclose(manager->fp);
	if (!error)
		exit(EXIT_FAILURE);
}
