#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order using the Quick
 * sort algorithm
 * @array: array of integers
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sort_recursive(array, 0, size - 1, size);
}

/**
 * quick_sort_recursive - sorts an array of integers in ascending order using
 * the Quick sort algorithm
 * @array: array of integers
 * @low: low index
 * @high: high index
 * @size: size of the array
 */

void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quick_sort_recursive(array, low, pivot - 1, size);
		quick_sort_recursive(array, pivot + 1, high, size);
	}
}

/**
 * partition - Lomuto partition scheme
 * @array: array of integers
 * @low: low index
 * @high: high index
 * Return: index of the pivot
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j, temp;

	pivot = array[high];
	i = low;
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			if (i != j)
				print_array(array, size);
			i++;
		}
	}
	temp = array[i];
	array[i] = array[high];
	array[high] = temp;
	if (i != high)
		print_array(array, size);
	return (i);
}

