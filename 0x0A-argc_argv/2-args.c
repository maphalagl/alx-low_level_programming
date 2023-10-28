#include <stdio.h>

/**
 * main - print all arguments of the program separated by new line.
 * @argc: argument count.
 * @argv: argument vector
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
