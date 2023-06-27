#include "sort.h"

/**
 * separate - array separate
 * @array: array to sort
 * @beginn: beginn
 * @end: end
 * @size: array size
 * Return: int between index
 */
int separate(int *array, int beginn, int end, size_t size)
{
	int i = beginn - 1, aux, j;

	for (j = beginn; j <= end - 1; j++)
	{
		if (array[j] < array[end])
		{
			i++;
			if (i < j)
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > array[end])
	{
		aux = array[i + 1];
		array[i + 1] = array[end];
		array[end] = aux;
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * sort_qui - recurse_sort
 * @array: array to sort
 * @beginn: beginn
 * @end: end
 * @size:size
 * Return: void
 */
void sort_qui(int *array, int beginn, int end, size_t size)
{
	int between;

	if (beginn < end)
	{
		between = separate(array, beginn, end, size);
		sort_qui(array, beginn, between - 1, size);
		sort_qui(array, between + 1, end, size);
	}
}

/**
 * quick_sort - sorts array
 * @array: array to sort
 * @size: array size
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	sort_qui(array, 0, size - 1, size);
}
