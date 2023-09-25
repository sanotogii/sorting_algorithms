#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 */

void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, min;

	if (size == 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] <= array[min])
				min = j;
		}
		if (i != min)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
