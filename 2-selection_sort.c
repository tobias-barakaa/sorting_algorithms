void selection_sort(int *array, size_t size)
{
    size_t i, j, idx;
    int new;

    for (i = 0; i < size - 1; i++)
    {
        idx = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[idx])
            {
                idx = j;
            }
        }

        if (idx != i)
        {
            new = array[i];
            array[i] = array[idx];
            array[idx] = new;
            print_array(array, size);
        }
    }
}
