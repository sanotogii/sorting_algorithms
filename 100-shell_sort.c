#include "sort.h"


/**
 * shell_sort - Sorts an array of integers using
 * Shell sort algorithm with Knuth sequence
 *
 * @array: Pointer to the array to be sorted
 * @size: Size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i, j;
	int tmp;

	/* Calculate the initial gap */
	while (gap < size / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		/* basically preforming an insertion sort */
		for (i = gap; i < size; i++)
		{
			tmp = array[i];
			j = i;

			while (j >= gap && array[j - gap] > tmp)
			{
				array[j] = array[j - gap];
				j -= gap;
			}
			array[j] = tmp;

		}
		/* decrease the interval */
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
