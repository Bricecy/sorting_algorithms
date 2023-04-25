#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort : sorts array of integers in ascending order
 * @array: given array
 * @size: size of array
 *
 * Description: this function is sorting  arrays of integers
 * in increasing order using the Bubble sort algorithm
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}

