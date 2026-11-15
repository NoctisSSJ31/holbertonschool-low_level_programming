#include <stdio.h>

/**
 * main - Simple calculator with menu loop and choice validation
 *
 * Return: Always 0.
 */
int main(void)
{
	int choice;

	while (1)
	{
		printf("Simple Calculator\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");
		if (scanf("%d", &choice) != 1)
			break;

		if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}
		else if (choice >= 1 && choice <= 4)
		{
			/* Les opérations seront implémentées dans les tâches suivantes */
		}
		else
		{
			printf("Invalid choice\n");
		}
	}

	return (0);
}
