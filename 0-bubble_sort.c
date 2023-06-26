#include "sort.h"

/**
*bubble_sort - algorithm function to print bubble-sort
*@array: array
*@size: size 
*Return: return void
*/

void bubble_sort(int *array, size_t size)
{
	int new;
	short comp;
	size_t k, i;

	if (size < 2)
     {
		return;
     }

	for (k = size; k >= 2; k--)
	{
		for (i = 1; i < k; i++)
		{
			comp = 1;
			if (array[i - 1] > array[i])
			{
				comp = 0;
				new = array[i];
				array[i] = array[i - 1];
				array[i - 1] = new;
				print_array(array, size);
			}
		}
		if (comp)
          {
			return;
          }
	}
}
