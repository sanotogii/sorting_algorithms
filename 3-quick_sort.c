#include "sort.h"


void quick(int *array, size_t size, int min, int max);
int partition(int *array, size_t size, int min, int max);
void swap(int *a, int *b);
/**
 * swap - Swaps two integer values.
 *
 * This function swaps the values pointed to by 'a' and 'b'.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * quick_sort - Sorts an integer array in ascending order
 *
 * @array: Pointer to the integer array to be sorted.
 * @size: The number of elements in the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick(array, size, 0, (int)size - 1);
}

/**
 * quick - Sorts an integer array using the Quick Sort
 *
 * @array: Pointer to the integer array to be sorted.
 * @size: The size of the array.
 * @min: The minimum index of the range to be sorted.
 * @max: The maximum index of the range to be sorted.
 */

void quick(int *array, size_t size, int min, int max)
{
	if (min < max)
	{
		int pivot = partition(array, size, min, max);

		quick(array, size, 0, pivot - 1);
		quick(array, size, pivot + 1, max);
	}
}
/**
 * partition - Partitions an integer array
 * @array: Pointer to the integer array to be partitioned.
 * @size: The size of the array.
 * @min: The minimum index of the range to be partitioned.
 * @max: The maximum index of the range to be partitioned.
 *
 * Return: The index of the pivot element after partitioning.
 */
int partition(int *array, size_t size, int min, int max)
{
	int pivot = array[max];
	int i = min - 1, j;

	for (j = min; j < max; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[j], &array[i + 1]);
	print_array(array, size);
	return (i + 1);
}

