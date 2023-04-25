#include "sort.h"

/**
 * selection sort - sorts array using selection sort
 * @array: array to sort
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, s, min;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min])
				min = j;
		if (min != i)
		{
			s = array[min];
			array[min] = array[i];
			array[i] = s;
			print_array(array, size);
		}
	}
}
