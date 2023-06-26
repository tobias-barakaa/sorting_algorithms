#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble sort
 * @array: The array to be sorted
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int new;
	short swapped;
	size_t k, i;

	if (array == NULL || size < 2)
		return;

	for (k = size; k >= 2; k--)
	{
		swapped = 0;
		for (i = 1; i < k; i++)
		{
			if (array[i - 1] > array[i])
			{
				swapped = 1;
				new = array[i];
				array[i] = array[i - 1];
				array[i - 1] = new;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			return;
	}
}
