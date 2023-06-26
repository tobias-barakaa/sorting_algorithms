#include "sort.h"

/**
 *bubble_sort - sorts an array of integers in ascending order
 *using the Bubble sort algorithm
 *@array:array of integers to sort
 *@size:size of array
 */

void bubble_sort(int *array, size_t size)
{
	bool swapped;
	int i;
	int temp;
	int iter;

	if (array == NULL || size == 0)
		return;
	do {
		swapped = false;
		i = 0;
		for (iter = size - 1; i < iter; i++)
		{
			if (array[i + 1] < array[i])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = true;
				print_array(array, size);
			}
		}
		iter--;
	} while (swapped);
}
