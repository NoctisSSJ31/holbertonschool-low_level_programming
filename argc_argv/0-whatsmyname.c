#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: argument count number of arguments
 * @argv: argument vector array of pointers of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    (void)argc;
    printf("%s\n", argv[0]);
    return (0);
}
