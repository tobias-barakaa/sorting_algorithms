#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using
 *  the Bubble sort algorithm
 * @array: array to sort
 * @size: length of the array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	int i, tmp = 0, n = size;

	if (array == NULL || size < 2)
		return;

	while (n > 0)
	{
		for (i = 0; i < (int)size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
			}
		}
		n--;
	}
}
