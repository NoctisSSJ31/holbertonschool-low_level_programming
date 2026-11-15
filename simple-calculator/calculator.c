#include <stdio.h>

/**
 * main - Simple calculator with safe division implementation
 *
 * Return: Always 0.
 */
int main(void)
{
	int choice;
	float a, b;

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
			scanf("%f", &a);
			printf("B: ");
			scanf("%f", &b);
			printf("Result: %.0f\n", a + b);
		}
		else if (choice == 2)
		{
			printf("A: ");
			scanf("%f", &a);
			printf("B: ");
			scanf("%f", &b);
			printf("Result: %.0f\n", a - b);
		}
		else if (choice == 3)
		{
			printf("A: ");
			scanf("%f", &a);
			printf("B: ");
			scanf("%f", &b);
			printf("Result: %.0f\n", a * b);
		}
		else if (choice == 4)
		{
			printf("A: ");
			scanf("%f", &a);
			printf("B: ");
			scanf("%f", &b);
			if (b == 0)
				printf("Error: division by zero\n");
			else
				printf("Result: %g\n", a / b);
		}
		else
		{
			printf("Invalid choice\n");
		}
	}

	return (0);
}
