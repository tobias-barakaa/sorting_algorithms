#include "sort.h"

/**
 * insertion_sort_list - insertion algorithm in C
 * @list: list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
    if (list == NULL || *list == NULL || (*list)->next == NULL)
    {
        return;
    }

    listint_t *new, *data;

    new = (*list)->next;
    while (new != NULL)
    {
        data = new;
        while (data->prev != NULL && data->n < data->prev->n)
        {
            /* Swap the nodes */
            data->prev->next = data->next;
            if (data->next != NULL)
            {
                data->next->prev = data->prev;
            }
            data->next = data->prev;
            data->prev = data->prev->prev;
            data->next->prev = data;

            if (data->prev == NULL)
            {
                *list = data;
            }
            else
            {
                data->prev->next = data;
            }

            print_list(*list);  

        }
        new = new->next;
    }
}
