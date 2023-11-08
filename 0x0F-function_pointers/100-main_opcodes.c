#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int l, nu_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nu_bytes = atoi(argv[1]);

	if (nu_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (l = 0; l < nu_bytes; l++)
	{
		printf("%02x", opc[l] & 0xFF);
		if (l != nu_bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
