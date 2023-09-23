#include "sort.h"

/**
 * bubble_sort - Sorts an integer array
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 */
typedef int bool;
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;
	bool flag = 0;

	if (size <= 1)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size - i; j++)
		{
			if (array[j - 1] > array[j])
			{
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
				flag = 1;
				print_array(array, size);
			}
			if (flag == 0)
				break;
		}
	}
}
