#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, minn;
	int temp;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		minn = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minn])
				minn = j;
		}
		if (minn != i)
		{
			temp = array[i];
			array[i] = array[minn];
			array[minn] = temp;
			print_array(array, size);
		}
	}
}
