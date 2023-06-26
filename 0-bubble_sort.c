#include "sort.h"

/**
 * bubble_sort - algo sort for bubble
 * @array: array
 * @size: size
 * Return: return void func
 */
void bubble_sort(int *array, size_t size)
{
	int new;
	int comp;
	size_t k, i;

	if (array == NULL || size < 2)
     {
		return;
     }

	for (k = size; k >= 2; k--)
	{
		comp = 0;
		for (i = 1; i < k; i++)
		{
			if (array[i - 1] > array[i])
			{
				comp = 1;
				new = array[i];
				array[i] = array[i - 1];
				array[i - 1] = new;
				print_array(array, size);
			}
		}
		if (comp == 0)
          {
			return;
          }
	}
}
