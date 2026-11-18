#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: argument count number of arguments
 * @argv: argument vector array of pointers of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
(void)argv; /* Unused parameter */
printf("%d\n", argc - 1);
return (0);
}