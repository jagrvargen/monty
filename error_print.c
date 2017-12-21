#include "monty.h"

void error_print(int n)
{
	if (n == 1)
	{
		printf("Error: Can't open file %s\n", manager->file_name);
		exit(EXIT_FAILURE);
	}
	else if (n == 2)
	{
		printf("L%d: unknown instruction %s");
		exit(EXIT_FAILURE);
	}
	if (n == 3)
	{
		printf("L%d: can't pint, stack empty\n", manager->l_n);
	}
}
