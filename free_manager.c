#include "monty.h"

void free_manager(void)
{
	ssize_t error;

	while (manager->h != NULL)
	{
		free((manager->h));
		*manager->h = (*manager->h)->next;
	}
	free(manager->h);

	free(manager->l);

	error = fclose(manager->fp);
	if (!error)
		exit(EXIT_FAILURE);
}
