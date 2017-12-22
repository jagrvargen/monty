#include "monty.h"

/**
 * error_print - Uses an integer parameter to determine appropriate error.
 *
 * @n: An integer value denoting error code.
 */
void error_print(int n)
{
	if (n == 1)
	{
		printf("Error: Can't open file %s\n", manager->file_name);
		exit(EXIT_FAILURE);
	}
	else if (n == 2)
	{
		printf("L%d: unknown ", manager->l_n);
		printf("insstruction %s\n", manager->file_name);
		free_manager();
		exit(EXIT_FAILURE);
	}
	else if (n == 3)
	{
		printf("Error: malloc failed\n");
		free_manager();
		exit(EXIT_FAILURE);
	}
	else if (n == 4)
	{
		printf("L%d: usage: push integer\n", manager->l_n);
		free_manager();
		exit(EXIT_FAILURE);
	}
	else if (n == 5)
	{
		printf("L%d: can't pint, stack empty\n", manager->l_n);
		free_manager();
		exit(EXIT_FAILURE);
	}
}

/**
 * error_print2 - Uses an integer parameter to determine appropriate error.
 *
 * @n: An integer value denoting error code.
 */
void error_print2(int n)
{
	if (n == 6)
	{
		printf("L%d: can't pop an empty stack\n", manager->l_n);
		free_manager();
		exit(EXIT_FAILURE);
	}
	else if (n == 7)
	{
		printf("L%d: can't swap, stack too short\n", manager->l_n);
		free_manager();
		exit(EXIT_FAILURE);
	}
	else if (n == 8)
	{
		printf("L%d: can't add, stack too short\n", manager->l_n);
		free_manager();
		exit(EXIT_FAILURE);
	}
	else if (n == 9)
        {
                printf("L%d: can't sub, stack too short\n", manager->l_n);
                free_manager();
                exit(EXIT_FAILURE);
        }
	else if (n == 10)
        {
                printf("L%d: can't div, stack too short\n", manager->l_n);
                free_manager();
                exit(EXIT_FAILURE);
        }
}

/**
 * error_print2 - Uses an integer parameter to determine appropriate error.
 *
 * @n: An integer value denoting error code.
 */
void error_print3(int n)
{
        if (n == 11)
        {
                printf("L%d: division by zero\n", manager->l_n);
                free_manager();
                exit(EXIT_FAILURE);
        }
        else if (n == 12)
        {
                printf("L%d: can't mul, stack too short\n", manager->l_n);
                free_manager();
                exit(EXIT_FAILURE);
        }
	else if (n == 13)
        {
                printf("L%d: can't mod, stack too short\n", manager->l_n);
                free_manager();
                exit(EXIT_FAILURE);
        }
}
