#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in ascending order using the
 * Bubble sort algorithm
 *
 * @array: array of integers
 * @size: count of integers in 'array'
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	short sorted;
	size_t end, i;

	if (size < 2)
		return;

	for (end = size; end >= 2; end--)
	{
		for (i = 1; i < end; i++)
		{
			sorted = 1;
			if (array[i - 1] > array[i])
			{
				sorted = 0;
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				print_array(array, size);
			}
		}
		if (sorted)
			return;
	}
}
