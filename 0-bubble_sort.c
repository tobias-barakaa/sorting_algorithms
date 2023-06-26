#include "sort.h"

/**
*bubble_sort - algorithm function to print bubble-sort
*@array: array
*@size: size of the array
*Return: return void
*/

void bubble_sort(int *array, size_t size)
{
     size_t i, j;
     int new;
     int ifTrue;
     
     if (array == NULL || size < 2)
     {
          return;
          }
          
          for (i = 0; i < size - 1; i++)
          {
               ifTrue = 0;
               for (j = 0; j < size - i - 1; j++)
               {
                    if (array[j] > array[j + 1])
                    {
                         new = array[j];
                         array[j] = array[j + 1];
                         array[j + 1] = new;
                         ifTrue = 1;
                         print_array(array, size);
                         }
                         }
                         if (ifTrue == 0)
                         break;
                         }
                         }
