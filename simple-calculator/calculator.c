#include <stdio.h>

/**
 * main - Simple calculator with multiplication implementation
 *
 * Return: Always 0.
 */
int main(void)
{
	int choice, a, b;

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
		else if (choice == 1)
		{
			printf("A: ");
			scanf("%d", &a);
			printf("B: ");
			scanf("%d", &b);
			printf("Result: %d\n", a + b);
		}
		else if (choice == 2)
		{
			printf("A: ");
			scanf("%d", &a);
			printf("B: ");
			scanf("%d", &b);
			printf("Result: %d\n", a - b);
		}
		else if (choice == 3)
		{
			printf("A: ");
			scanf("%d", &a);
			printf("B: ");
			scanf("%d", &b);
			printf("Result: %d\n", a * b);
		}
		else if (choice == 4)
		{
			/* La division viendra ensuite */
		}
		else
		{
			printf("Invalid choice\n");
		}
	}

	return (0);
}
