#include "main.h"

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory ptr
*/

int *array_range(int min, int max)
{
	int *ptr;
	int index, j = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * ((max - min) + 1));
	if (ptr != NULL)
	{
		for (index = min; index <= max; index++)
		{
			ptr[j] = index;
			j++;
		}
		return (ptr);
	}
	else
		return (NULL);

}
