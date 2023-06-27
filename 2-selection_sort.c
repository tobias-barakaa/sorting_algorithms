#include "sort.h"

/**
* selection_sort - selection sort
* @array: array 
* @size: Size 
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, new, idx;

	if (!array)
     {
		return;
     }

	for (i = 0; i < size - 1; i++)
	{
		idx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[idx])
               {
				idx = j;
               }
		if (idx != i)
		{
			new = array[idx];
			array[idx] = array[i];
			array[i] = new;
			print_array(array, size);
		}
	}

}
