#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble sort
 * @array: The array to be sorted
 * @size: The size of the array
 * Return: return void
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int curr;
    int new;

    if (array == NULL || size < 2)
    {
        return;
    }

    for (i = 0; i < size; i++)
    {
        new = 0;
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                curr = array[j];
                array[j] = array[j + 1];
                array[j + 1] = curr;
                new = 1;
                print_array(array, size);
            }
        }
        if (!new == 0)
            break;
    }
}

