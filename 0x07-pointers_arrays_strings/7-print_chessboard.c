#include "main.h"

/*
 *print_chessboard - a function that prints the chessboard.
 *@a - array
 *
 *This function prints the characters in the chessboard array.
 */

void print_chessboard(char (*a)[8])
{
	int l, g;

	for (l = 0; l < 8; l++)
	{
		for (g = 0; g < 8; g++)
		{
			_putchar(a[l][g]);
		}
		_putchar('\n');
	}
}
