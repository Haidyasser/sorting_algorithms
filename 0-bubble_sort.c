#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;
	bool swapped;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}
