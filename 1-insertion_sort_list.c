#include "sort.h"

/**
 * insertion_sort_list - insertion algorithm
 * @list: list array
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *now, *num_swap, *back;

	if (!list || !*list)
     {
		return;
     }

	now = *list;
	while ((now = now->next))
	{
		num_swap = now;
		while (num_swap->prev && num_swap->n < num_swap->prev->n)
		{
			back = num_swap->prev;
			if (num_swap->next)
               {
				num_swap->next->prev = back;
               }
			if (back->prev)
               {
				back->prev->next = num_swap;
               }
			else
               {
				*list = num_swap;
               }
			back->next = num_swap->next;
			num_swap->prev = back->prev;
			num_swap->next = back;
			back->prev = num_swap;

			print_list(*list);
		}
	}
}
