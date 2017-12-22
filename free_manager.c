#include "monty.h"

/**
 * free_manager - A function which frees malloc'd memory and closes an open
 * file.
 */
void free_manager(void)
{
	stack_t *temp;

	temp = manager->h;
	fclose(manager->fp);
	free(manager->l);
	while (manager->h != NULL)
	{
		manager->h = manager->h->next;
		free(temp);
		temp = manager->h;
	}

}
