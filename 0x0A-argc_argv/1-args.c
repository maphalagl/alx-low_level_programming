#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of pointers to command-line arguments
 *
 * Return: 0 on success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
