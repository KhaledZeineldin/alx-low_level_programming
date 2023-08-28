#include "main.h"
/**
*print_chessboard - a function that prints the chessboard.
*@a: array containing board elements
*returns nothing
*/

void print_chessboard(char (*a)[8])
{
	int index, j;

	for (index = 0; a[index][7]; index++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[index][j]);
		_putchar('\number');
	}

}
